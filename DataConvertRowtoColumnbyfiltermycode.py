import tkinter as tk
from tkinter import filedialog, messagebox, ttk
import pandas as pd
import os

# ─── GUI Setup ───
root = tk.Tk()
root.title("Brand POSM Filter Tool")
root.resizable(False, False)

# ─── Center Window ───
root.update_idletasks()
width  = 500
height = 420

screen_width  = root.winfo_screenwidth()
screen_height = root.winfo_screenheight()

x = (screen_width  // 2) - (width  // 2)
y = (screen_height // 2) - (height // 2)

root.geometry(f"{width}x{height}+{x}+{y}")

# ─── Title ───
tk.Label(
    root,
    text="Brand POSM Filter Tool",
    font=("Arial", 16, "bold"),
    fg="green"
).pack(pady=10)

# ─── Input File Selection ───
tk.Label(root, text="📂 Select Input Excel File:", font=("Arial", 10, "bold")).pack(anchor="w", padx=20)

input_frame = tk.Frame(root)
input_frame.pack(fill="x", padx=20, pady=5)

input_path = tk.StringVar()
tk.Entry(input_frame, textvariable=input_path, width=45).pack(side="left")

def browse_input():
    path = filedialog.askopenfilename(
        title="Select Excel File",
        filetypes=[("Excel files", "*.xlsx")]
    )
    input_path.set(path)

tk.Button(input_frame, text="Browse", command=browse_input, bg="blue", fg="white").pack(side="left", padx=5)

# ─── Output Directory Selection ───
tk.Label(root, text="💾 Select Output Folder:", font=("Arial", 10, "bold")).pack(anchor="w", padx=20, pady=(10,0))

output_frame = tk.Frame(root)
output_frame.pack(fill="x", padx=20, pady=5)

output_path = tk.StringVar()
tk.Entry(output_frame, textvariable=output_path, width=45).pack(side="left")

def browse_output():
    path = filedialog.askdirectory(title="Select Output Folder")
    output_path.set(path)

tk.Button(output_frame, text="Browse", command=browse_output, bg="blue", fg="white").pack(side="left", padx=5)

# ─── Output File Name ───
tk.Label(root, text="📝 Output File Name:", font=("Arial", 10, "bold")).pack(anchor="w", padx=20, pady=(10,0))

name_frame = tk.Frame(root)
name_frame.pack(fill="x", padx=20, pady=5)

output_name = tk.StringVar(value="output_with_filtered_columns")
tk.Entry(name_frame, textvariable=output_name, width=40).pack(side="left")
tk.Label(name_frame, text=".xlsx", font=("Arial", 10)).pack(side="left")

# ─── Status Label ───
status_label = tk.Label(root, text="", font=("Arial", 10), fg="blue")
status_label.pack(pady=5)

# ─── Progress Bar ───
progress = ttk.Progressbar(root, length=400, mode="determinate")
progress.pack(pady=5)

# ─── Run Process ───
def run_process():

    # ── Validations ──
    if not input_path.get():
        messagebox.showerror("Error", "Please select Input Excel File!")
        return

    if not output_path.get():
        messagebox.showerror("Error", "Please select Output Folder!")
        return

    if not output_name.get():
        messagebox.showerror("Error", "Please enter Output File Name!")
        return

    try:
        # ── Step 1 — Read Excel ──
        status_label.config(text="⏳ Reading Excel file...")
        progress["value"] = 10
        root.update()

        all_sheets = pd.read_excel(input_path.get(), sheet_name=None)
        df1 = all_sheets["Sheet1"].copy()
        df2 = all_sheets["Sheet2"].copy()

        # ── Step 2 — Clean ──
        status_label.config(text="⏳ Cleaning data...")
        progress["value"] = 25
        root.update()

        df1.columns = df1.columns.str.strip()
        df2.columns = df2.columns.str.strip()

        sheet1_uuid_col = "uuid"
        sheet2_uuid_col = "uuid"
        brand_col       = "Brand"
        posm_col        = "Name"

        df1[sheet1_uuid_col] = df1[sheet1_uuid_col].astype(str).str.strip()
        df2[sheet2_uuid_col] = df2[sheet2_uuid_col].astype(str).str.strip()
        df1[brand_col]       = df1[brand_col].astype(str).str.strip()
        df1[posm_col]        = df1[posm_col].astype(str).str.strip()

        # ── Step 3 — Map ──
        status_label.config(text="⏳ Mapping brands and POSM...")
        progress["value"] = 40
        root.update()

        brand_map = {
            "bkash":  "bKash",
            "nagad":  "Nagad",
            "rocket": "Rocket"
        }

        posm_map = {
            "poster":  "Poster",
            "banner":  "Banner",
            "sticker": "Sticker",
            "festoon": "Festoon",
        }

        # All valid QR keywords
        qr_keywords = [
            "qr code",
            "qr card",
            "qr sticker",
            "qrcode",
            "qrsticker",
            "qr material",
            "qr"
        ]

        # Map brand
        df1["Brand_Clean"] = df1[brand_col].str.lower().map(brand_map)

        # Map normal posm
        df1["POSM_Clean"] = df1[posm_col].str.lower().map(posm_map)

        # Handle ALL QR with keyword check
        df1["POSM_Clean"] = df1.apply(
            lambda row: "QR" if str(row[posm_col]).lower().strip() in qr_keywords
            else row["POSM_Clean"],
            axis=1
        )

        # ── Step 4 — Filter ──
        status_label.config(text="⏳ Filtering data...")
        progress["value"] = 55
        root.update()

        df1 = df1[
            df1["Brand_Clean"].isin(["bKash", "Nagad", "Rocket"]) &
            df1["POSM_Clean"].isin(["Poster", "Banner", "Sticker", "Festoon", "QR"])
        ]

        # ── Step 5 — Pivot ──
        status_label.config(text="⏳ Converting to wide format...")
        progress["value"] = 70
        root.update()

        df1["New_Column"]   = df1["Brand_Clean"] + "_" + df1["POSM_Clean"].str.replace(" ", "", regex=False)
        df1["Insert_Value"] = df1["POSM_Clean"]

        df1_unique = df1.drop_duplicates(subset=[sheet1_uuid_col, "New_Column"])

        wide_df = df1_unique.pivot(
            index=sheet1_uuid_col,
            columns="New_Column",
            values="Insert_Value"
        ).reset_index()

        wide_df = wide_df.rename(columns={sheet1_uuid_col: sheet2_uuid_col})

        # ── Step 6 — Merge ──
        status_label.config(text="⏳ Merging sheets...")
        progress["value"] = 80
        root.update()

        df2_output = df2.merge(wide_df, on=sheet2_uuid_col, how="left")
        df2_cols   = list(df2.columns)

        # Build required columns
        required_columns = []
        for brand in ["bKash", "Nagad", "Rocket"]:
            for posm in ["Poster", "Banner", "Sticker", "Festoon", "QR"]:
                col_name = brand + "_" + posm.replace(" ", "")
                required_columns.append(col_name)

        # Add missing columns as ""
        for col in required_columns:
            if col not in df2_output.columns:
                df2_output[col] = ""

        # Fill NaN BEFORE brand check!
        df2_output = df2_output.fillna("")

        # ── Brand Indicator Columns ──
        df2_output["bKash_Brand"]  = df2_output.apply(
            lambda row: "bKash"  if any(row[col] != "" for col in required_columns if col.startswith("bKash"))  else "", axis=1
        )
        df2_output["Nagad_Brand"]  = df2_output.apply(
            lambda row: "Nagad"  if any(row[col] != "" for col in required_columns if col.startswith("Nagad"))  else "", axis=1
        )
        df2_output["Rocket_Brand"] = df2_output.apply(
            lambda row: "Rocket" if any(row[col] != "" for col in required_columns if col.startswith("Rocket")) else "", axis=1
        )

        # ── Column Order ──
        brand_indicator_cols = ["bKash_Brand", "Nagad_Brand", "Rocket_Brand"]

        final_columns = df2_cols + brand_indicator_cols + [
            col for col in required_columns
            if col in df2_output.columns
        ]

        df2_output = df2_output[final_columns]

        # ── Step 7 — Save ──
        status_label.config(text="⏳ Saving file...")
        progress["value"] = 90
        root.update()

        output_file = os.path.join(
            output_path.get(),
            output_name.get() + ".xlsx"
        )
        df2_output.to_excel(output_file, index=False)

        # ── Done ──
        progress["value"] = 100
        status_label.config(text="✅ Done! File saved successfully!", fg="green")
        root.update()

        messagebox.showinfo(
            "Success!",
            f"File saved successfully!\n\n📁 {output_file}"
        )

    except Exception as e:
        status_label.config(text="❌ Error occurred!", fg="red")
        messagebox.showerror("Error", str(e))
        progress["value"] = 0

# ─── Buttons Frame ───
btn_frame = tk.Frame(root)
btn_frame.pack(pady=15)

# ─── Run Button ───
tk.Button(
    btn_frame,
    text="▶ Run Process",
    command=run_process,
    bg="green",
    fg="white",
    font=("Arial", 13, "bold"),
    width=18
).pack(side="left", padx=10)

# ─── Close Button ───
tk.Button(
    btn_frame,
    text="✖ Close",
    command=root.destroy,
    bg="red",
    fg="white",
    font=("Arial", 13, "bold"),
    width=18
).pack(side="left", padx=10)

root.mainloop()
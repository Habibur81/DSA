-- Windowfunction

-- 1. Aggregate Window Functions

-- SUM()
-- Calculate the sum of a column a window of row
SELECT salary, SUM(salary) OVER(ORDER BY Id) AS RunningTotal FROM Employee

-- AVG()
-- Calculates the average of a column over a window of rows.
SELECT Salary, AVG(Salary) OVER (PARTITION BY DepartmentId) AS AvgSalary FROM Employees;

-- MIN()
-- Finds the minimum value of a column over a window of rows.
SELECT Salary, MIN(Salary) OVER (PARTITION BY DepartmentId) AS MinSalary FROM Employees;

-- MAX()
-- Finds the maximum value of a column over a window of rows.
SELECT Salary, MAX(Salary) OVER (PARTITION BY DepartmentId) AS MaxSalary FROM Employees;

-- COUNT()
-- Counts the number of rows in a window
SELECT Salary, COUNT(*) OVER (PARTITION BY DepartmentId) AS EmployeeCount FROM Employees;

-- 2. Ranking Window Functions

-- ROW_NUMBER()
-- Assigns a unique sequential integer to each row within the window
SELECT Name, Salary, ROW_NUMBER() OVER (ORDER BY Salary DESC) AS RowNum FROM Employees;

-- RANK()
-- Assigns a rank to each row, with gaps in ranking for ties
SELECT Name, Salary, RANK() OVER (ORDER BY Salary DESC) AS Rank FROM Employees;

-- DENSE_RANK()
-- Assigns a rank to each row, without gaps in ranking for ties.
SELECT Name, Salary, DENSE_RANK() OVER (ORDER BY Salary DESC) AS DenseRank FROM Employees;

-- NTILE(n)
-- Divides the rows into n buckets and assigns a bucket number to each row
SELECT Name, Salary, NTILE(4) OVER (ORDER BY Salary DESC) AS Quartile FROM Employees;

-- 3. Analytic Window Functions

-- LAG()
-- Accesses the value of a column from a previous row in the window
SELECT Salary, LAG(Salary, 1) OVER (ORDER BY Id) AS PreviousSalary FROM Employees;

-- LEAD()
-- Accesses the value of a column from a subsequent row in the window
SELECT Salary, LEAD(Salary, 1) OVER (ORDER BY Id) AS NextSalary
FROM Employees;

-- FIRST_VALUE()
-- Returns the value of a column from the first row in the window
SELECT Salary, FIRST_VALUE(Salary) OVER (ORDER BY Salary DESC) AS HighestSalary FROM Employees;

-- LAST_VALUE()
-- Returns the value of a column from the last row in the window
SELECT Salary, LAST_VALUE(Salary) OVER (ORDER BY Salary DESC) AS LowestSalary FROM Employees;

-- 4. Distribution Window Functions

-- CUME_DIST()
-- Calculates the cumulative distribution of a value within a window
SELECT Salary, CUME_DIST() OVER (ORDER BY Salary) AS CumeDist FROM Employees;

-- PERCENT_RANK()
-- Calculates the percentile rank of a row within a window
SELECT Salary, PERCENT_RANK() OVER (ORDER BY Salary) AS PercentRank FROM Employees;

-- 5. Advanced Window Functions

-- NTH_VALUE()
-- Returns the value of a column from the nth row in the window.
SELECT Salary, NTH_VALUE(Salary, 3) OVER (ORDER BY Salary DESC) AS ThirdHighestSalary FROM Employees;

-- PERCENTILE_CONT()
-- Calculates a percentile value based on a continuous distribution
SELECT Salary, PERCENTILE_CONT(0.5) WITHIN GROUP (ORDER BY Salary) OVER () AS MedianSalary FROM Employees;

-- PERCENTILE_DISC()
-- Calculates a percentile value based on a discrete distribution.
SELECT Salary, PERCENTILE_DISC(0.5) WITHIN GROUP (ORDER BY Salary) OVER () AS MedianSalary FROM Employees;
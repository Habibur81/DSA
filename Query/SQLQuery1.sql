CREATE DATABASE EMSDB;
USE EMSDB;

CREATE TABLE departments(
	dept_id INT PRIMARY KEY,
	dept_name VARCHAR(50)
);

CREATE TABLE employees(
	emp_id INT PRIMARY KEY,
	emp_name VARCHAR(50),
	salary INT,
	dept_id INT,
	FOREIGN KEY(dept_id) REFERENCES departments (dept_id)
);

INSERT INTO departments VALUES
(1, 'IT'),
(2, 'HR'),
(3, 'Finance'),
(4, 'CS'),
(5, 'DA'),
(6, 'Analysis');

INSERT INTO employees VALUES
(101, 'Methun', 50000, 1),
(102, 'Mahad', 60000, 2),
(103, 'Salam', 50000, 3),
(104, 'Asif', 250000, 4),
(105, 'Rabbi', 200000, 4),
(106, 'Farhana', 150000, 4),
(107, 'Sabur', 100000,5),
(108, 'Mizan', 800000,5),
(109, 'Mazhar', 600000,5),
(110, 'Sorowar', 900000,5),
(111, 'Mehedi', 100000,5),
(112, 'Habib', 40000,5),
(113, 'Kanij', 80000,5);

SELECT 
	e.emp_name, d.dept_name 
FROM 
	employees e 
INNER JOIN	
	departments d 
ON 
	e.dept_id = d.dept_id;

UPDATE employees SET dept_id = 6 WHERE emp_id = 111;
UPDATE employees SET dept_id = 6 WHERE emp_id = 112;
UPDATE employees SET dept_id = 6 WHERE emp_id = 113;
UPDATE employees SET salary = 90000 WHERE emp_id = 110;
UPDATE employees SET salary = 80000 WHERE emp_id = 108;
UPDATE employees SET salary = 60000 WHERE emp_id = 109;
UPDATE employees SET salary = 60000 WHERE emp_id = 112;

SELECT
	MAX(e.salary) AS Salary, d.dept_name AS 'Department Name'
FROM
	employees e
INNER JOIN
	departments d
ON 
	e.dept_id = d.dept_id
GROUP BY
	d.dept_name
HAVING 
	MAX(Salary) >= 100000
ORDER BY
	Salary DESC;

SELECT 
	emp_name AS Name, MAX(salary) AS Salary
FROM
	employees
GROUP BY
	emp_name
HAVING
	MAX(salary) = (SELECT MAX(salary) FROM employees)
ORDER BY
	Salary DESC

SELECT TOP 1
	emp_name AS Name,
	salary AS Salary
FROM
	employees
ORDER BY
	salary DESC

SELECT TOP 1
    emp_name AS Name,
    salary AS Salary
FROM
    employees
ORDER BY
    salary DESC;




# Write your MySQL query statement below
select (
    select distinct salary from Employee order by salary desc limit 1 offset 1
) as SecondHighestSalary;



-- OFFSET is used to skip a certain number of rows before returning results. (skip first row here offset 1)
-- DISTINCT --> Removes duplicates.
-- 

SELECT MAX(salary) AS SecondHighestSalary
FROM Employee
WHERE salary < (
    SELECT MAX(salary)
    FROM Employee
);
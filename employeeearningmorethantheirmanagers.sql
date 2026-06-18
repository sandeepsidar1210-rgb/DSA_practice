Select e.name as Employee 
from Employee  e
join Employee  m
ON e.managerId = m.id
where e.salary > m.salary;

-- Join is used to combine two tables here self join is used table Employee e is joined with Employee m
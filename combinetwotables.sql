SELECT firstName , lastName , city , state  From 
Person Left join 
Address ON Person.personId = Address.personId

-- INNNER JOIN - "Return only the rows that match in both tables."
-- LEFT JOIN - "Return all rows from the left table, and matching rows from the right table (otherwise NULL)."
-- RIGHT JOIN - "Return all rows from the right table, and matching rows from the left table (otherwise NULL)."
-- FULL OUTER JOIN - "Return all rows from both tables, matching where possible, otherwise NULL."
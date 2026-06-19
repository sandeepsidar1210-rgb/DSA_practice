Select c.name as Customers
from Customers c 
left join Orders o
on c.id = o.customerId
where o.customerId = NULL

-- We will take the whole customers table then we will check on condn (c.id = o.customerId) if not we still keep it but with the null value and then show where customerId is null only



-- SELECT name AS Customers
-- FROM Customers
-- WHERE id NOT IN (
--     SELECT customerId
--     FROM Orders
-- );
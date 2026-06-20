Select customer_number from Orders Group by customer_number order by count(*) DESC  LIMIT 1;

-- group by groups the rows with the same customer number then order by count make sure the arrangement of that in descending for instance lets say that the count of rows of 3 is 2 times and rest are having 1 so it will be at the top and limit 1 shows only the first row.
-- group by ensures grouping of rows with same customer_number  so the number of rows become 2 for customer number 3.
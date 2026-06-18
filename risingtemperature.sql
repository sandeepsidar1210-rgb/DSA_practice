Select p.id as id
from Weather p
join Weather y 
on DATEDIFF(p.recordDate,y.recordDate) = 1
where p.temperature > y.temperature;

-- Number of days between date1 and date2

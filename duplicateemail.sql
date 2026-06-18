select email from Person 
group by email 
having count(email) > 1;

-- groups rows that share identical values in specified columns
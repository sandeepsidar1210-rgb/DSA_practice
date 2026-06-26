Select s1.score ,
(
    select count(distinct s2.score) from  Scores s2
    where s2.score >= s1.score 
)
as 'rank'
From Scores s1 order by s1.score desc;

-- optimal solution ...


SELECT
    score,
    DENSE_RANK() OVER (ORDER BY score DESC) AS `rank`
FROM Scores;

-- Dense Rank (same values share rank, no gaps)

-- 1. ROW_NUMBER(): Every row gets a different number.

score	Row Number
4.00	1
4.00	2
3.85	3
3.65	4

-- 2. RANK(): Equal scores share the same rank, but gaps appear.

score	Rank
4.00	1
4.00	1
3.85	3
3.65	4

-- 3. DENSE_RANK(): Equal scores share the same rank, without gaps.

score	rank
4.00	1
4.00	1
3.85	2
3.65	3
3.65	3
3.50	4

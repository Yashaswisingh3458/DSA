# Write your MySQL query statement below
select distinct teacher_id, count(DISTINCT subject_id) as cnt from Teacher group by teacher_id
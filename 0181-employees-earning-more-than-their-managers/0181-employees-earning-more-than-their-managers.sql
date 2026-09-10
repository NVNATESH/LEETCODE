# Write your MySQL query statement below
select name as Employee from Employee e
where salary > (select salary from Employee s where e.managerId = s.id);
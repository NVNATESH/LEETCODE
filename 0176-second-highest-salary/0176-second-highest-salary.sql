# Write your MySQL query statement below
with ran as (
    select id,salary,DENSE_RANK() over(
        order by salary desc
     ) as r
    from employee
)
select max(salary) as SecondHighestSalary from ran where r=2;
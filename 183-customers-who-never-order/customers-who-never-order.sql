# Write your MySQL query statement below
select a.name Customers from Customers a left join orders b on a.id=b.customerId where b.customerId is null;
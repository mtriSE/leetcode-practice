--
-- @lc app=leetcode id=1378 lang=mysql
--
-- [1378] Replace Employee ID With The Unique Identifier
--

-- @lc code=start
# Write your MySQL query statement below
select UNI.unique_id as unique_id, EM.name as name
from  Employees as EM  left join EmployeeUNI as UNI on UNI.id = EM.id;
-- @lc code=end


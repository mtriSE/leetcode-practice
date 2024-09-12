--
-- @lc app=leetcode id=1211 lang=mysql
--
-- [1211] Queries Quality and Percentage
--

-- @lc code=start
# Write your MySQL query statement below
select query_name, round(avg(rating / position),2) as quality, round(sum(IF(rating < 3,1,0)) * 100 / COUNT(rating),2) as poor_query_percentage
from Queries
where query_name is not null
group by query_name;

-- @lc code=end


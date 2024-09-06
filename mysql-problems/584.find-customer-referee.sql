--
-- @lc app=leetcode id=584 lang=mysql
--
-- [584] Find Customer Referee
--

-- @lc code=start
# Write your MySQL query statement below
# In SQL, NULL represents the absence of a value, meaning it is not equivalent to any value, including an empty string or zero. A comparison like field != value will not return rows where field is NULL because NULL is neither equal nor unequal to any value. In other words, SQL considers comparisons involving NULL to be unknown
select name
from Customer
where (referee_id <> 2) or (referee_id is null);
-- @lc code=end


--
-- @lc app=leetcode id=1141 lang=mysql
--
-- [1141] User Activity for the Past 30 Days I
--

-- @lc code=start
# Write your MySQL query statement below
SELECT activity_date as day, COUNT(DISTINCT user_id) as active_users
FROM Activity
WHERE DATEDIFF(activity_date,'2019-07-27') <= 0 AND DATEDIFF(activity_date, '2019-07-27') > -30 AND activity_type is not null
GROUP BY activity_date;
-- @lc code=end


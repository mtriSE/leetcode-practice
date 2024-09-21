--
-- @lc app=leetcode id=2356 lang=mysql
--
-- [2356] Number of Unique Subjects Taught by Each Teacher
--

-- @lc code=start
# Write your MySQL query statement below
SELECT teacher_id, COUNT(DISTINCT subject_id) as cnt
FROM Teacher
GROUP BY teacher_id;
-- @lc code=end


--
-- @lc app=leetcode id=1075 lang=mysql
--
-- [1075] Project Employees I
--

-- @lc code=start
# Write your MySQL query statement below
SELECT project_id, round(avg(experience_years),2) as average_years
FROM Project P
JOIN Employee E
    ON P.employee_id = E.employee_id
GROUP BY P.project_id;

-- @lc code=end


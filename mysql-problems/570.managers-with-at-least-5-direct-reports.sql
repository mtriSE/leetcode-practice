--
-- @lc app=leetcode id=570 lang=mysql
--
-- [570] Managers with at Least 5 Direct Reports
--

-- @lc code=start
# Write your MySQL query statement below
SELECT E.name
FROM Employee E
JOIN Employee M ON E.id = M.managerId
GROUP BY E.id, E.name
HAVING COUNT(*) >=5;
-- @lc code=end


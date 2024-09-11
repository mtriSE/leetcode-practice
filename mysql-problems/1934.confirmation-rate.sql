--
-- @lc app=leetcode id=1934 lang=mysql
--
-- [1934] Confirmation Rate
--

-- @lc code=start
# Write your MySQL query statement below
SELECT S.user_id as user_id, round(avg(IF(c.ACTION='confirmed',1,0)),2) as confirmation_rate
FROM Signups S
LEFT JOIN Confirmations C
ON S.user_id = C.user_id
GROUP BY S.user_id
ORDER BY S.user_id ASC;

-- @lc code=end


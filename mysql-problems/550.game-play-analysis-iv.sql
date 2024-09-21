--
-- @lc app=leetcode id=550 lang=mysql
--
-- [550] Game Play Analysis IV
--

-- @lc code=start
SELECT ROUND(COUNT(DISTINCT player_id) /  (SELECT COUNT(DISTINCT player_id) FROM Activity),2) AS fraction
FROM Activity AS A
WHERE (A.player_id, DATE_SUB(A.event_date, INTERVAL 1 DAY)) IN (
    SELECT player_id, MIN(event_date) AS first_login 
    FROM Activity 
    GROUP BY player_id
);
-- @lc code=end


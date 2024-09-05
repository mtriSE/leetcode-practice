--
-- @lc app=leetcode id=1581 lang=mysql
--
-- [1581] Customer Who Visited but Did Not Make Any Transactions
--

-- @lc code=start
# Write your MySQL query statement below
-- Note: NULL values are not counted.
SELECT V.customer_id as customer_id, COUNT(V.customer_id) as count_no_trans
FROM Visits AS V LEFT JOIN Transactions AS T ON V.visit_id = T.visit_id
WHERE T.transaction_id is NULL
GROUP BY V.customer_id;

-- @lc code=end
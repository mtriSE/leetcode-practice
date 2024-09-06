--
-- @lc app=leetcode id=1068 lang=mysql
--
-- [1068] Product Sales Analysis I
--

-- @lc code=start
# Write your MySQL query statement below
SELECT P.product_name AS product_name, S.year AS year, S.price AS price
FROM Sales AS S JOIN Product AS P ON S.product_id=P.product_id;
-- @lc code=end


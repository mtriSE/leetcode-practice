--
-- @lc app=leetcode id=1070 lang=mysql
--
-- [1070] Product Sales Analysis III
--

-- @lc code=start
# Write your MySQL query statement below
SELECT product_id, year as first_year, quantity, price
FROM Sales
WHERE (product_id, year) IN (
    SELECT product_id, MIN(year) AS year
    FROM Sales
    GROUP BY product_id
);
-- @lc code=end


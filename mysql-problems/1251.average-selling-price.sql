--
-- @lc app=leetcode id=1251 lang=mysql
--
-- [1251] Average Selling Price
--

-- @lc code=start
# Write your MySQL query statement below
SELECT P.product_id as product_id, coalesce(round(sum(U.units*P.price) / sum(U.units),2),0) as average_price
FROM Prices P 
LEFT JOIN UnitsSold U
    ON P.product_id = U.product_id
WHERE 
    P.start_date <= U.purchase_date AND p.end_date >= U.purchase_date 
    OR U.purchase_date IS NULL
GROUP BY P.product_id;


-- @lc code=end


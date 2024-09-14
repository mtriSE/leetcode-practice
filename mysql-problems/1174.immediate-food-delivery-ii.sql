--
-- @lc app=leetcode id=1174 lang=mysql
--
-- [1174] Immediate Food Delivery II
--

-- @lc code=start
# Write your MySQL query statement below
SELECT round(
    -- SUM(IF(D1.order_date = D1.customer_pref_delivery_date,1,0)) * 100 / COUNT(D1.order_date)
    avg(D1.order_date = D1.customer_pref_delivery_date) * 100
    ,2
) as immediate_percentage 
FROM Delivery D1
JOIN (
    SELECT customer_id, MIN(order_date) as order_date
    FROM Delivery
    GROUP BY customer_id
    -- ORDER BY order_date ASC
) AS D2
ON D1.order_date = D2.order_date and D1.customer_id = D2.customer_id;
-- GROUP BY customer_id
-- @lc code=end


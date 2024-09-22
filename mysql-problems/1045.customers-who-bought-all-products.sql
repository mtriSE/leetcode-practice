--
-- @lc app=leetcode id=1045 lang=mysql
--
-- [1045] Customers Who Bought All Products
--

-- @lc code=start
WITH Total AS (
    SELECT COUNT(DISTINCT product_key) as total 
    FROM Product
)

SELECT C.customer_id as customer_id
FROM Customer AS C
GROUP BY C.customer_id
HAVING COUNT(DISTINCT product_key) = (
    SELECT total
    FROM Total   
);

-- @lc code=end


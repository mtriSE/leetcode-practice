--
-- @lc app=leetcode id=1683 lang=mysql
--
-- [1683] Invalid Tweets
--

-- @lc code=start
# Write your MySQL query statement below
select tweet_id
from Tweets
where CHAR_LENGTH(content) > 15;
-- where LENGTH(content) > 15;

-- don;t use LENGTH() because this function compute length by byte. While CHAR_LENGTH() computes length by characters
-- @lc code=end


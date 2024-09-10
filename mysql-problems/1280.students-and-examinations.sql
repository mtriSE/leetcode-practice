--
-- @lc app=leetcode id=1280 lang=mysql
--
-- [1280] Students and Examinations
--

-- @lc code=start
# Write your MySQL query statement below
SELECT 
    Std.student_id as student_id
    , Std.student_name as student_name
    , S.subject_name as subject_name
    , COUNT(E.subject_name) as attended_exams
    -- *
FROM Students Std
CROSS JOIN Subjects S
LEFT JOIN Examinations E 
ON S.subject_name = E.subject_name AND  E.student_id = Std.student_id
-- LEFT JOIN Subjects S ON E.subject_name = S.subject_name
GROUP BY Std.student_id, Std.student_name, S.subject_name
ORDER BY Std.student_id, S.subject_name;
-- @lc code=end


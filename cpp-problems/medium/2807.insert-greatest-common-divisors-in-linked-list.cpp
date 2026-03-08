/*
 * @lc app=leetcode id=2807 lang=cpp
 *
 * [2807] Insert Greatest Common Divisors in Linked List
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int gcd(int a, int b) { 
        if(a==0 || b == 0) {
            return a + b;
        }
        while(a != b) {
            if (a<b) {
                b = b-a;
            } else {
                a = a-b;
            }
        }

        return a;
    }

    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head->next == NULL) return head;
        ListNode* prev = head;
        ListNode* next = prev->next;
        while (next != NULL) {
            ListNode* temp = new ListNode(gcd(prev->val, next->val),next);
            prev->next = temp;
            prev = next;
            next = prev->next;
        }
        return head;
    }
};
// @lc code=end


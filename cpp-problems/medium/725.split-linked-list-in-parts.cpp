/*
 * @lc app=leetcode id=725 lang=cpp
 *
 * [725] Split Linked List in Parts
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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int len = length(head);
        vector<ListNode*> answer;
        ListNode* curr = head;
        int base_length = len / k;
        int remainder = len % k;
        for(int i=0; i<k;++i){
            answer.push_back(curr);
            for(int j=0; j<base_length - 1 + (remainder ? 1 : 0); ++j){ 
                if (!curr) {
                    break;
                }
                curr = curr->next;
            }
            remainder -= (remainder ? 1 : 0);
            if(curr) {
                ListNode* next = curr->next;
                curr->next=NULL;
                curr = next;
            }
        }
        return answer;
    }
private: 
    int length(ListNode* head) {
        int len = 0;
        while(head!=NULL) {
            len++;
            head = head->next;
        }
        return len;
    }

};
// @lc code=end


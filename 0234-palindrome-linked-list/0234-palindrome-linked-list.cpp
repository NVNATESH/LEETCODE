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
    bool check(ListNode* right, ListNode*& left){
        if(right==NULL) return true;
        bool ispal = check(right->next,left);
        if(!ispal) return false;
        if(right->val != left->val) return false;
        left = left->next;
        return true;
    }
    bool isPalindrome(ListNode* head) {
        return check(head,head);
    }
};
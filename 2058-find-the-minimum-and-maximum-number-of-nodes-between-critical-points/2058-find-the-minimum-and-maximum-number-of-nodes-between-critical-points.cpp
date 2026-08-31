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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> v;
        vector<int> u = {-1,-1};
        int a = INT_MAX,b = INT_MAX,x = 2;
        ListNode *temp = head->next, *prev = head;
        while(temp->next!=NULL){
            if((prev->val > temp->val && temp->val < temp->next->val) || (prev->val < temp->val && temp->val > temp->next->val)){
                v.push_back(x);
            }
            x++;
            prev = prev->next;
            temp = temp->next;
        }
        if(v.size()<=1) return u;
        a = v[v.size()-1] - v[0];
        for(int i=1;i<v.size();i++){
            b = min(b,v[i]-v[i-1]);
        }
        return {b,a};
    }
};
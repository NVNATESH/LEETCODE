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
    ListNode* merge(ListNode* l1, ListNode* l2){
        ListNode* temp = new ListNode(0);
        ListNode* curr = temp;
        while(l1!=NULL && l2!=NULL){
            if(l1->val<=l2->val){
                curr->next = l1;
                l1 = l1->next;
            }
            else{
                curr->next = l2;
                l2 = l2->next;
            }
            curr = curr->next;
        }
        if(l1!=NULL) curr->next = l1;
        else curr->next = l2;
        return temp->next;
    }
    ListNode* mergesort(vector<ListNode*>&l , int left,int right){
        if(left==right){
            return l[left];
        }
        int mid = left + (right-left)/2;
        ListNode* l1 = mergesort(l,left,mid);
        ListNode* l2 = mergesort(l,mid+1,right);
        return merge(l1,l2);
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
       if(lists.size()==0) return NULL;
       return mergesort(lists,0,lists.size()-1);
    }
};
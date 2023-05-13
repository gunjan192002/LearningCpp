/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}//your code is not clean for sure
 
 * };
 */
class Solution {
    private:
    ListNode* fun(ListNode* root)
    {
        if(root==NULL||root->next==NULL){ return root;}
       
        ListNode* chotahead=fun(root->next);
        root->next->next=root;
        root->next=NULL;
        return chotahead;
    }
public:
    ListNode* reverseList(ListNode* head) {
       return fun(head);
    }
};
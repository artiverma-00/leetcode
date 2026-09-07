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
    ListNode* deleteDuplicates(ListNode* head) {

        if(!head || !head->next)
        return head;

        ListNode *curr = head->next, *pre=head;

        while(curr){
            if(curr->val==pre->val){
                pre->next=curr->next;
                delete curr;
                curr=pre->next;
            }
            else{
                pre  = pre->next;
                curr=curr->next;
            }
        }

        

        return head;
        
    }
};
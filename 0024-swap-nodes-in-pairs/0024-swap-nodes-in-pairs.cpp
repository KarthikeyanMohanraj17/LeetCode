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
    ListNode* swapPairs(ListNode* head) {
        
        ListNode *f,*s,*prev;
        if(head==NULL||head->next==NULL)return head;
        
        f= head->next;
        s=head;
        prev=s;
        
        ListNode *newhead=f;
        
        while(1)
        {
            
          ListNode *temp;
            prev->next =f;
            temp=f->next;
             f->next=s;
            s->next= temp;
            if(temp==NULL||temp->next==NULL)return newhead;
            f= temp->next;
            prev=s;
            s=temp;
        }
            
            
        
      return newhead;  
    }
};
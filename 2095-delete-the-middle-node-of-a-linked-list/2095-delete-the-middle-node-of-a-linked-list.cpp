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
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL||head->next==NULL)return NULL;
        ListNode *f,*s,*temp;
        f=s=head;
        while(f!=NULL )
        {
            if(f->next==NULL) break;

            temp=s;
            s=s->next;
            f=f->next->next;
            
        }
        temp->next=s->next;
        return head;
    }
};
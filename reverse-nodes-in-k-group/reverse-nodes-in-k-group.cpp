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
int find_length(ListNode*head)
{
    int count=0;
    while(head!=NULL)
    {
        count++;
        head=head->next;
    }
    return count;
}
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL||k==1)
        return head;
        ListNode*dummy=new ListNode(0);
        dummy->next=head;
        int length=find_length(head);
        ListNode*pre=dummy;
        ListNode*curr;
        ListNode*nex;
        while(length>=k)
        {
            curr=pre->next;
            nex=curr->next;
            for(int i=1;i<k;i++)
            {
                curr->next=nex->next;
                nex->next=pre->next;
                pre->next=nex;
                nex=curr->next;
            }
            pre=curr;
            length-=k;
        }
        return dummy->next;
    }
};
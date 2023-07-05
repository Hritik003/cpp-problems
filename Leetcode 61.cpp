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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL)return NULL;
        ListNode *curr=head, *prev=head,*temp=head;
        int n=0;
        while(temp!=nullptr){temp=temp->next;n++;}
        // while(k>0){
        //     prev=curr;
        //     curr=curr->next;
        //     k--;
        // }
        while(curr->next)curr=curr->next;
        curr->next=head;
        k = k%n;

        int pos=1;
        while(pos<n-k){
            prev=prev->next;
            pos++;
        }
        
        // head=curr;

        
        ListNode *ans = prev->next;
        prev->next=NULL;

        
        return ans;
    }
};

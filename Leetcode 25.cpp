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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL)return nullptr ;
        ListNode *prev=nullptr, *next = nullptr, *curr=head;

        //checking if there are sufficient next k nodes, if not return
        ListNode *check=head;
        for(int i=0;i<k;i++){
            if(check==nullptr)return head;

            check=check->next;
        }

        //reverse k nodes
        int c=k;
        while(curr && c--){
            next=curr->next;
            curr->next = prev;
            prev=curr;
            curr=next;

        }

        if(next){
            head->next=reverseKGroup(next,k);
        }

        return prev;
    }
};

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
    ListNode* removeNthFromEnd(ListNode *head, int n) {
        
       int length = len(head);
       ListNode *temp=head;
       ListNode *prev=nullptr;
       
       if(length==n){
           head=head->next;
           return head;
       }



      n=length-n-1;
      int i=0;

       while(temp){
           if(i== n){
               temp->next=temp->next->next;
           }
           i++;
           temp=temp->next;

       }
       return head;

     
    }

    int len(ListNode *head){
        int count=1;
        ListNode* temp=head;
        while(temp->next != nullptr){
            count++;
            temp=temp->next;

        }
        return count;
    }
};

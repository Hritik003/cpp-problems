#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef struct Node_t{
    int data;
    struct Node_t *next;
}Node;

Node *createNode(int val){
    Node *new=(Node *)malloc(sizeof(Node));
    new->data=val;
    new->next=NULL;
    return new;
}

Node *addToList(Node *head,int val){
    Node *new=createNode(val);
    if(head==NULL){
        head = new;
    }
    else{
        Node *curr=head;
        while(curr->next!=NULL){
            curr=curr->next;
        }
        curr->next=new;
    }
    return new;
}

Node *readList(){
    int n;
    scanf("%d",&n);
    Node *head=NULL;
    for(int i=1;i<=n;i++){
        int x;
        scanf("%d",&x);

        if(head==NULL){
            head = addToList(head,x);
        }
        else{
            addToList(head,x);
        }
    }
    return head;
}

 Node* reverse(Node*head)
    {
        Node* current = head;
        Node *prev = NULL;
        *next = NULL;
 
        while (current != NULL) {
            next = current->next;

            current->next = prev;
  
            prev = current;
            current = next;
        }
        head = prev;
        return head;
    }

void display(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        
        printf("%d ",curr->data);
        curr=curr->next;
    }
}

int main(){
    Node *head = readList();
    Node *new = reverse(head);
    display(new);

}

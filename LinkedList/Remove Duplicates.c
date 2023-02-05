#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
  int n;

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

Node *removeRepeated(Node *head){
     int count=0;
     int flag=0;
     Node *dummy = (Node *)malloc(sizeof(Node ));
     dummy->next=head;
     Node* prev = dummy;
     Node* current = head;
  
    while (current != NULL) {

        while (current->next != NULL && prev->next->data == current->next->data){

            current = current->next;
        }


       if (prev->next == current){
            prev = prev->next;
            flag=1;
        }
            else{
            prev->next = current->next;
            flag=1;
        }
        current = current->next;
    }
    head = dummy->next;
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
    Node *new = removeRepeated(head);
    display(new);

}

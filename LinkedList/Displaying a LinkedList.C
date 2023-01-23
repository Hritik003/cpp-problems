
#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node *next;
}*first=NULL;

void create(int A[],int n){
    int i;
    struct Node *curr,*last;
    first = (struct Node*)malloc(sizeof(struct Node));
    first->data = A[0];
    first->next =NULL;
    last=first;
    for(int i=1;i<=n-1;i++){
        curr = (struct Node*)malloc(sizeof(struct Node));
        curr->data= A[i];
        curr->next=NULL;
        last->next=curr;
        last=curr;
    }
}
void Display(struct Node*p){
    if(p!=NULL){
        printf("%d ",p->data);
        Display(p->next);
    }
}
int main()
{
    int A[]={1,2,3,4,5};
    create(A,5);
    Display(first);

    return 0;
}

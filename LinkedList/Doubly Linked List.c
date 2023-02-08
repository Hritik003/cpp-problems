#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *prev;
    struct Node *next;
}*first=NULL;


void create(int A[],int n){
    struct Node *p,*last;
    int i;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = A[0];
    first->prev = first->next = NULL;
    last= first;
    for(int i=1;i<n;i++){
        p=(struct Node*)malloc(sizeof(struct Node));
        p->data=A[i];
        p->next=last->next;
        p->prev=last;
        last->next=p;
        last=p;
        
        
    }
    
}
int length(struct Node *p){
    int len=0;
    while(p){
        len++;
        p=p->next;
    }
    return len;
}
void Display(struct Node *p){
    printf("the list is : \n");
    while(p){
        printf(" %d ",p->data);
        p=p->next;
    }
}


int main(){
    int A[]={1,2,3,4};
    create(A,4);
    Display(first);
}

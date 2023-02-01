#include<stdio.h>
#include <stdlib.h>
 int n;
struct Node{
    int data;
    struct Node *next;
}*first = NULL;

void readList(){
    
    int i;
    struct Node *p;
    first = (struct Node *)malloc(sizeof(struct Node));
    p=(struct Node*)malloc(sizeof(struct Node));
    p = first;
    for(i=0;i<n;i++)
        {
            int x;
            scanf("%d",&x);
            p->data=x;
            if(i!=n-1)
            {
                p->next= (struct Node*)malloc(sizeof(struct Node));
                p = p->next;
            }
            else
            {
                p->next = NULL;
            }
         }

    
}

int findMedian(struct Node *p,int n){
    if(n%2==0){
        for(int i=0;i<(n/2)-1;i++){
            p=p->next;
        }
        int a = p->data;
        p=p->next;
        int ans = (a+p->data)/2;
    }
    else{
        for(int i=0;i<(n/2);i++){
            p=p->next;
        }
        return p->data;
    }
}

int main(){
   
    scanf("%d",&n);
    readList();
    
    displayList(first);
    int median = findMedian(first,n);
    printf("the median is : %d",median);
}

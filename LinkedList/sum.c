struct Node{
    int data;
    struct Node *next;
}*first=NULL;

int Sum(struct Node *p){
    int s=0;
    while(p!=NULL){
        s+=p->data;
        p=p->next;
    }
    return s;
}

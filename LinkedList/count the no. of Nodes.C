struct Node{
    int data;
    struct Node *next;
}*first=NULL;

int count(struct Node *p){
    
    if(p!=NULL) {
        return count(p->next)+1;
    }
    else return 0;
}

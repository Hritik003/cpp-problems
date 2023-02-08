
struct Node * rotate(int k, struct Node* first){
    struct Node* t = first;
    while(t->next != NULL)t=t->next;
    t->next=first;
    first->prev=t;
    
    int i=0;
    while(i<k){
        t=t->next;
        first=first->next;
        i++;
    }
    t->next=NULL;
    first->prev = NULL;

    
    return first;
}

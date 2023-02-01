//searching an element, and if found replacing it to first node.

node* Search(node*p , int key){
    Node*q = NULL;// for keeping a count on a previous node.
    while(p!=NULL){
        if(key==p->data){
        q->next = p->next;
        p->next = first;
        first = p;
        }
        else {
            q=p;
            p=p->next;
        }
    }
    
}

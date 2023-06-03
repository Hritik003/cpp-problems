int partition(int A[], int l,int h){
    int pivot = A[l];
    int i=l,j=h;
    do{
        do{i++;}while(A[i]<=pivot);
        do{j--;}while(A[j]>pivot);
        if(i<j){
            swap(A[i],A[j]);
        }
    }while(i<j);
    swap(A[j],A[l]);
    return j;
    
}

void Quicksort(int A[], int l , int h){
    if(l<h){
        int j = partition(A,l,h);
        Quicksort(A,l,j);
        Quicksort(A,j+1,h);
    }
}

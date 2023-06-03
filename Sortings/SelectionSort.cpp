void selectionSort(int A[], int n){
    int i,j,k;
    for(int i=0;i<n;i++){
        
        for(j=k=i;j<n;j++){
            if(A[j]<A[k])k=j;
        }
        swap(A[k],A[i]);
    }
}

void insertion(int A[], int n){
    for(int i=1;i<n;i++){
        int x = A[i];
        j=i-1;
        while(j>-1 && A[j]>x){
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=x;
        
    }
}

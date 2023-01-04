
#include <bits/stdc++.h>
using namespace std;

void f(int i, vector<int> &res , vector<int> &arr , int n){
    if(i>=n){
        for(auto t : res ){
            cout<<t<<" ";
        }
        cout<< endl;
        return;
    }
    res.push_back(arr[i]);
    f(i+1,res,arr,n);
    res.pop_back();
    f(i+1,res,arr,n);
}

int main()
{
    vector<int> arr={1,2,3,4};
    vector<int> res;
    int n = arr.size();
    f(0,res,arr,n);

    return 0;
}

//o/p: 1 2 3 4 
// 1 2 3 
// 1 2 4 
// 1 2 
// 1 3 4 
// 1 3 
// 1 4 
// 1 
// 2 3 4 
// 2 3 
// 2 4 
// 2 
// 3 4 
// 3 
// 4 

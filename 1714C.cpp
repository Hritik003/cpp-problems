/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>

using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--){
        int s;
       cin>>s;
       stack<int> stack;
      
       for(int i=9;i>=1 && s ;i++){
           if(s>=i){
               stack.push(i);
               s-=i;
           }
           else{
               stack.push(s);
           }
       }
       
       while(!stack.empty()) {
       cout<< stack.top();
       stack.pop();
       cout<<endl;
       }
   }

    return 0;
}

#include <bits/stdc++.h>
#define nl "\n"

using namespace std;

void solve(){
  
  int n;
    string s;
    cin >> n >> s;
    if(s[0] == '0' || s[1] == '0' || s[n] == '0'){
        cout << "No\n";
        return;
    }
    vector<int>v;
    v.push_back(0);
    int hold = 1;
    for(int i = 2; i < s.size() - 1; i++){
        if(s[i] == '0') v.push_back(i);
        else{
            v.push_back(hold);
            hold = i;
        }
    }
    v.push_back(hold);
    cout << "Yes\n";
    for(auto it : v) cout << it << " ";
    cout << endl;
}

int main() {
  // your code goes here
  ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  int ht;
  cin>>ht;
  
  for(int i=0;i<ht;i++)
{
solve();
} 
  return 0;

}

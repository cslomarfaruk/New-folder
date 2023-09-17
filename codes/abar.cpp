// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <string>

using namespace std;
/* * * * * * * * * * * * * * 
 *                         *
 *    !(I hate Coding)     *
 *                         *
 * * * * * * * * * * * * * */
#define int long long
#define endl "\n"

void solve(){
   int n,p,q,r,s; cin >> n >> p >> q >> r >> s;
   vector<int>a(n+1),ans1,ans2,ans3;
   for (int i = 1; i <= n; ++i)
   {
      cin >> a[i];
      if(i>=p and i<=q){
         ans1.push_back(a[i]);
      }
      else if(i>=r and i<=s){
         ans2.push_back(a[i]);
      }
      else
         ans3.push_back(a[i]);
   }
   for (int i = 1; i <= n;i++)
   {
    if(i>=p and i<=q){
         for(auto x:ans2)cout << x << ' ';
            i+=q-p;
      }
      else if(i>=r and i<=s){
         for(auto x:ans1)cout << x << ' ';
         i+=s-r;
      } 
      else{
         cout << a[i] << ' '; 
         
      }
   }cout << endl;
}

int32_t main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tc=1;
    // cin >> tc;
    for (int t = 1; t <= tc; t++) {
       //cout << "Case " << t << ": ";
      solve();
    }
    return 0;
}
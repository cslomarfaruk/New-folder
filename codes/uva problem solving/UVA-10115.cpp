#include <bits/stdc++.h>
using namespace std;
/* * * * * * * * * * * * * * 
 *                         *
 *    !(I hate Coding)     *
 *                         *
 * * * * * * * * * * * * * */
#define int long long
#define endl "\n"

void solve(){
   int n; while(cin >> n){

   if(n==0)return ;
   string a; getline(cin,a);
   string s[2*n];
   for(int i=0; i<2*n; i++){
       getline(cin,s[i]); 
       // cout << s[i] << endl;
   }
   string st;
   // getline(cin, a);
   getline(cin,st);
  for(int i=0; i<2*n; i+=2){
      while(st.find(s[i])<=st.size()){
        st.replace(st.find(s[i]),s[i].size(),s[i+1]);
     }
  }
    cout << st << endl;
   }
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
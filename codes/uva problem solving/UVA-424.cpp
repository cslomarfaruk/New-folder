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
  vector<string> v;
  vector<int> p;
  //input numbers
     int x=0;
      while(true){
      string a; cin >> a; if(a=="0")break;
      v.push_back(a);
      x=max(x, (int)a.size());
     }

  int n=0,m=0;
  for(int j=x-1,k=1; j>=0; j--,k++){
      
   n=n/10;
     for (int i = 0; i < v.size(); ++i)
     {
      if(v[i].size()-k >=0)
        n+=v[i][v[i].size()-k]-'0';
          else continue;
     }
    p.push_back(n%10);
  }
  p.push_back(n/10);
  reverse(p.begin(),p.end());
  bool flag=1;
 for(auto a:p){
   if(a==0 && flag)continue;
   else {cout << a;flag=0;}
   } 
   cout << "" <<endl;

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
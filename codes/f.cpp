#include <bits/stdc++.h>
using namespace std;
/*_________>>O.M.A.R__F.A.R.U.K<<________*/
#define ll long long
#define loop(x) for(int i=0; i<x; ++i)
#define loop1(x) for(int j=0; j<x; ++j)
#define loop2(x) for(int k=0; k<x; ++k)
#define endl "\n"


void solve(){
            int n,k,c=0; cin >> n >> k;
            int b[1000]={};
            int a[n]; loop(n){
                  cin>>a[i];
                  b[a[i]]=1;
            }
      vector<int> vt;
      for(int i=0; i<n; ++i){
         if(b[a[i]]==1){
            vt.push_back(i+1);
            b[a[i]]=0;
            c++;
         }
      }
      if(c>=k){
            cout << "YES" << endl;
      loop(k)cout << vt[i] << " ";
         cout<< endl;
 }
      else cout << "NO" << endl;
     
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tc=1;
  	cin >> tc;
    for (int t = 1; t <= tc; t++) {
       //cout << "Case " << t << ": ";
       solve();
    }
    return 0;
}
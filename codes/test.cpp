#include <bits/stdc++.h>
using namespace std;
/* * * * * * * * * * * 
 *                   *
 *                   *
 *                   *
 * * * * * * * * * * */
#define int long long
#define endl "\n"

void solve(){
   int ans=-1;
   bool ok=0;
	string s; cin >> s;
   for (int i = 1; i < s.size() && (!ok); ++i)
   {
      bool vis[s.size()+2]={0};
      for(int j=i; ; ){
         if(!vis[j]){
            vis[j]=1;
         }
         else{ 
               break;
            }
         if(s[j]=='L'){
            j-=i;
            if(j<0)break;
         }
         else{
            j+=i;
            if(j>=s.size())
               {ok=1; ans=i; break;}
         }
         // if(j>=s.size())
            
      }
      if(ok)break;
   }
   cout << ans << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(0);

    int tc=1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
       //cout << "Case " << t << ": ";
       solve();
    }
    return 0;
}
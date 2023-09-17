#include <bits/stdc++.h>
using namespace std;
/*_________>>O.M.A.R__F.A.R.U.K<<________*/
#define ll long long
#define loop(x) for(int i=1; i<=x; ++i)
#define loop1(x) for(int j=0; j<x; ++j)
#define loop2(x) for(int k=0; k<x; ++k)
#define pb push_back
#define endl "\n"


void solve(){
		int n,k,c=0; cin >> n >> k;
		map<int,int> mp; vector<int> vt;
		loop(n){
			int x; cin >> x;
			if(!mp[x]){
				vt.push_back(i);
			}
			mp[x]++;
		}
     
      if(mp.size()<k)cout << "NO" << endl;
     else {
      	cout << "YES" << endl;
        for(int i=0; i<k; i++)cout << vt[i] << " ";
        cout<< endl;
       }
     
     
}

int main() {
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
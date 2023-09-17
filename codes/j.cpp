#include <bits/stdc++.h>
using namespace std;
/*_________>>O.M.A.R__F.A.R.U.K<<________*/
#define ll long long
#define loop(x) for(int i=0; i<x; ++i)
#define loop1(x) for(int j=0; j<x; ++j)
#define loop2(x) for(int k=0; k<x; ++k)
#define endl "\n"

void solve(){
	map<int , int> mp;
		int n,c=0; cin >> n; 
		int a[n]; loop(n){
			cin >> a[i];
			mp[a[i]]++;
		}
		for(auto &x : mp){
			if(x.second%2!=0)c++;
		}
		if(c==0)cout << 2 << endl;
		else cout << c << endl;
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
#include <bits/stdc++.h>
using namespace std;
/*_________>>O.M.A.R__F.A.R.U.K<<________*/
#define ll long long
#define loop(x) for(int i=0; i<x; ++i)
#define loop1(x) for(int j=0; j<x; ++j)
#define loop2(x) for(int k=0; k<x; ++k)
#define endl "\n"

void solve(){
	    int a[100000]={};
		int n; cin >> n;
		// vector<int> vt(n);
		loop(n){
			int x; cin>> x;
			a[x]++;
		}
		cout << n - *max_element(a,a+100000) << endl;
		
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
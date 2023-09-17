#include <bits/stdc++.h>
using namespace std;
/* * * * * * * * * * * * * * 
 *                         *
 *    !(I hate Coding)     *
 *                         *
 * * * * * * * * * * * * * */
#define int long long
#define endl "\n"
#define M 10^9+7
void solve(){
    int a,b; cin >> a >> b;
    if(a%3==1)a++;
    if(b%3==1)b--;
    if(b-a==0){
        if(a%3!=1)
            cout << "1\n";
    }
    else if(b-a<3)
        cout << 2 << endl;
    else
        cout << 2*(b-a)/3+(b-a)%3+1 << endl;
}
int32_t main() {
    ios_base::sync_with_stdio(0);
 
    int tc=1;
  	 cin >> tc;
    for (int t = 1; t <= tc; t++) {
       cout << "Case " << t << ": ";
       solve();
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
/* * * * * * * * * * * * * * 
 *                         *
 *    !(I hate Coding)     *
 *                         *
 * * * * * * * * * * * * * */
#define int long long
#define endl "\n"
bool prime[1000000009];
map<int,int> numbers;
void SieveOfEratosthenes()
{   
    int n=100009;
    for (int p = 2; p * p <= n; p++) {
        if (!prime[p]) {
            for (int i = p * p; i <= n; i += p)
                prime[i] = true;
        }
    }
 
    for (int p = 2; p <= n; p++)
        if (!prime[p])
            numbers[p]=p;
}

void solve(){
    int n; cin >> n;
    vector<pair<int,int>>p;
    int c=0;
    for(auto x:numbers){
        c=0;
        if(!(n%x.second)){
            while(n%x.second){
                n/=x.second;
                c++;
            }
            p.push_back(make_pair(c,x.second));
        }
    }
    sort(p.begin(),p.end());
    int ans=0;
    for(auto &x:p){
        auto it=x;
        for(auto ; it!=x.end(); ++it){
            ans+=x.first*it.second;
            it.first-=x.first;
        }
    }
    cout << ans << endl;
}

int32_t main(void) {
    // SieveOfEratosthenes();
    int tc=1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
       //cout << "Case " << t << ": ";
      solve();
    }
    return 0;
}
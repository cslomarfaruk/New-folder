#include <bits/stdc++.h>
using namespace std;
/* * * * * * * * * * * * * * 
 *                         *
 *    !(I hate Coding)     *
 *                         *
 * * * * * * * * * * * * * */
#define int long long
#define endl "\n"

/* DFS
const int N = 1e5+7;
vector<int> graph[N];
vector<bool> vis(N);


// During query question, should have to pre compute all the graph :)

vector<int> parent[N];

void dfs(int vertex, int par){
     parent[vertex]=vertex;
     for(auto child:graph[vertex]){
        if(child==par)continue;
        dfs(child,vertex);
    }
}

*/


/*
bool prime(int a){
    if(a%2==0)return false;
    else if(a==2)return true;
else{
    bool flag=false;
        for (int i = 3; i < sqrt(a); i+=2)
        {
            if(a%i==0)return false;
        }
        return true;
    }
}
*/

/*
bool isPrime[10000009];
vector<int> prime;
         
void cieve(){

  int size = 10000000; // 10^7
    isPrime[0]=isPrime[1]=1;

    for(int i=2;i*i<size;i++)
        if(!isPrime[i]){
            for(int j=i*i;j<size;j+=i)
                isPrime[j]=1;
        }
    prime.push_back(2); 
    for(int i=3; i<10000000; i+=2)
        if(!isPrime[i])
            prime.push_back(i);
}

*/


void solve(){
    // int n; cin >> n;
    // vector<int> v(n);
    // for(auto &x:v)cin >> x;
    // string s; cin >> s;
}

int32_t main(void) {
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
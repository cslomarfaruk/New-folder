#include <iostream>
#include<bits/stdc++.h>
using namespace std;

#define int long long int
const int N = 1e5+7;
vector<int> graph[N];
vector<bool> vis(N);
// vector<vector<int>>cc;
// vector<int>  current_cc;

    bool isLoop=false;

bool dfs(int vertex, int par){

    // cout << vertex << endl;
    vis[vertex]=true;

    // current_cc.push_back(vertex);
    for(auto child:graph[vertex]){
        // cout << "parent: " << vertex << " ,child : " << child << endl;

        if(vis[child] && child==par )continue;
        if(vis[child]) return true;

        isLoop |= dfs(child,vertex);
    }
    return isLoop;  
}
// cycle detection :)
int32_t main() {
    int n,ans=0,m; cin >> n >> m;
    for (int i = 0; i < m; ++i)
    {
        int x,y; cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    bool flag=0;
    for (int i = 1; i <= n; ++i)
    {   
        if(vis[i])continue;
        // current_cc.clear();
        if(dfs(i,0)){
            cout << 1 << endl;
            flag=1;
            break;
        }
        // cc.push_back(current_cc);
        // ans++;
    }
    if(!flag)cout << 0 << endl;

    // cout << ans << endl;
    // for (auto p:cc)
    // {
    //     for(auto x:p)cout << x << ' ';
    //         cout << endl;
    // }
    return 0;
}

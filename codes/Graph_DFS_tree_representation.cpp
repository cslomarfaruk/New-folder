// #include <iostream>
#include<bits/stdc++.h>
using namespace std;

#define int long long int
const int N = 1e5+7;
vector<int> graph[N];
vector<bool> vis(N);
// vector<vector<int>>cc;
// vector<int>  current_cc;

bool isLoop=false;
vector<int> depth(N),height(N);

bool dfs(int vertex, int par){
          
          for(auto child:graph[vertex]){

            if(child==par)continue;

            depth[child] = depth[vertex] + 1;

            dfs(child,vertex);

            height[vertex]=max(height[vertex],height[child]+1);
          }
}

int32_t main() {
    int n,ans=0,m; cin >> n >> m;
    for (int i = 0; i < m; ++i)
    {
        int x,y; cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
   dfs(1,0);
   for (int i = 1; i <= n; ++i)
   {
       cout << depth[i] << ' ' << height[i]<< '\n';

   }
    return 0;
}

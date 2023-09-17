#include <iostream>
#include<bits/stdc++.h>
using namespace std;

#define int long long int
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


vector<int> path(int v){
    vector<int> ans;
    while(v!=-1){
        ans.push_back(v);
        v=parent[v];
    }
    reverse(ans.begin(), ans.end());
    return ans;
}


int32_t main() {
    int n,ans=0,m; cin >> n >> m;
    for (int i = 0; i < m; ++i)
    {
        int x,y; cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
   dfs(1,-1);

   int x,y; cin >> x >> y;
   vector<int> path_x=path(x);
   vector<int> path_y=path(y);

   int ln=min(path_y.size(),path_x.size());
   int lca=-1;
   for (int i = 0; i < ln; ++i)
   {
       if(path_x[i]==path_y[i]){
        lca=path_y[i];
       }
   }
   
    return 0;
}

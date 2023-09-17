#include <iostream>
#include<bits/stdc++.h>
using namespace std;

#define int long long int
const int N = 1e5+7;
vector<int> graph[N];
vector<bool> vis(N);
// vector<vector<int>>cc;
// vector<int>  current_cc;

vector<int> depth(N),height(N);
int sub_tree_sum[N];
int even_count[N];
// During query question, should have to pre compute all the graph :)
bool dfs(int vertex, int par){

          if(vertex%2==0){
            even_count[vertex]++;
          }
          sub_tree_sum[vertex]+=vertex;
          for(auto child:graph[vertex]){

            if(child==par)continue;
            dfs(child,vertex);
            sub_tree_sum[vertex]+=sub_tree_sum[child];
           
            even_count[vertex]+=even_count[child];

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
       // cout << depth[i] << ' ' << height[i]<< '\n';
    cout << sub_tree_sum[i] << ' ' << even_count[i] << endl;
   }
    return 0;
}

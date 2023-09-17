#include <iostream>
#include <bits/stdc++.h>
#include<algorithm>
#include <vector>
#include <map>
#include <string>
#define int long long
// #include <set>
// #include <stack>
// #include <queue>
// #include <string>
using namespace std;
/* * * * * * * * * * * * * * 
 *                         *
 *    !(I hate Coding)     *
 *                         *
 * * * * * * * * * * * * * */
vector<int> graph[100000];

bool vis[100000+9]={0};
int dfs(int vertex, int par){


	if(vis[vertex])return vertex;
	vis[vertex]=1;

	// auto x=vertex;

	for(auto child:graph[vertex]){
		      if(child==par)continue;
		      vis[child]=1;
            dfs(child,vertex);
          }
          // return x;
}

int32_t main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tc=1;
    // cin >> tc;
    for (int t = 1; t <= tc; t++) {
       //cout << "Case " << t << ": ";

    	int n; cin >> n;
    	int a[n+1];
    	cin >> a[0];
    	graph[1].push_back(a[0]);
    	for (int i = 1; i < n; ++i)
    	{
    		cin >> a[i];
    		graph[a[i-1]].push_back(a[i]);
    	}

    	for (int i = 1; i <= n; ++i)
    	{
    		for(auto x:graph[i])cout <<i<< " "<< x << " " ;
    			cout << endl;
    	}
    	for (int i = 1; i <= n; ++i)
    	{
    		int x=dfs(i,-1);
    	  cout <<	x << endl;
    	}
    	// dfs(graph);
      // solve();
     
    }
    return 0;
}
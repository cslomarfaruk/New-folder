//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:


    vector<int> bfsOfGraph(int n, vector<int> graph[]){
    vector<int> dfs;
    bool vis[n+8]={0};
    queue<int> q;
    q.push(0);
    vis[0]=1;
 
    while(!q.empty()){
        int u=q.front();
        dfs.push_back(u);
        q.pop();
        for(auto it:graph[u]){
            if(!vis[it]){
                vis[it]=true;
                q.push(it);
            }
        }
    }
return dfs;
}


};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            		// adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.bfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends
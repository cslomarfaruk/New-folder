//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:

  	void bfs(bool vis[]){
  		queue<int> q;

  	}

 void dfs( int i, int j, int incolor,int newcolor, vector<vector<int>>& image){
    
      int n=image.size();
      int m=image[0].size();
      if(i<0 || j<0)return;
      if(i>=n || j>=m)return;
      if(image[i][j] != incolor)return;

      image[i][j]=newcolor;

      dfs(i-1,j,incolor,newcolor,image);
      dfs(i+1,j,incolor,newcolor,image);
      dfs(i,j-1,incolor,newcolor,image);
      dfs(i,j+1,incolor,newcolor,image);
}
    // Function to return a list containing the DFS traversal of the graph.
   vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newcolor) {
        int incolor= image[sr][sc];
        if(incolor != newcolor)
        dfs(sr,sc,incolor,newcolor,image);
        	return image;
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
            adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends
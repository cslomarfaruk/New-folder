#include <bits/stdc++.h>
using namespace std;
/* * * * * * * * * * * * * * 
 *                         *
 *    !(I hate Coding)     *
 *                         *
 * * * * * * * * * * * * * */
#define int long long
#define endl "\n"
#define M 1e9+7


int32_t main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

   int ans=1;
   queue<int> q;
   map<int ,int>visited;
   q.push(1);
   visited[1]=1;
   while(!q.empty()){
      int x=q.front();
      q.pop();
      for(auto i:graph[x]){
         if(visited[i])continue;
         q.push(i);
         cout<<i<<" ";
         visited[i]=1;
      }
   }
   // cout << ans << endl;

    
    return 0;
}
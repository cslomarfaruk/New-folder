#include <bits/stdc++.h>
using namespace std;
/* * * * * * * * * * * 
 *                   *
 * - _-_-_-_-_-_- _- *
 *                   *
 * * * * * * * * * * */
#define intt long long
#define endl "\n"


vector<int> vis[100];


int getX(string s){
	return (s[0]-'a');
}
int getY(string s){
	return (s[1]-'1');
}
bool isValid(int x,int y){
	return (x>=0 && y>=0 && x<8 && y<8);
}

vector<pair<pair<int,int>,string>>Movements={
			{{1,0},"R"},{{-1,0},"L"},
			{{0,1},"U"},{{0,-1},"D"},
			{{-1,-1},"LD"},{{-1,1},"LU"},
			{{1,1},"RU"},{{1,-1},"RD"}
};

// vector<int> lev[1000];
vector<string> path[1000];


void bfs(string source,string dest){

	vector<string> path[100];

	int sourceX=getX(source);
	int sourceY=getY(source);
	int destX=getX(dest);
	int destY=getY(dest);


		queue<pair<int,int>> q;
		q.push({sourceX,sourceY});

		vis[sourceX][sourceY]=1;

		vector<int> v(100),v2(100);

		while(!q.empty()){

			pair<int,int> u=q.front();

			int x=u.first, y=u.second;
			q.pop();

			for(auto mov:Movements){

				int childX=mov.first.first + x;
				int childY=mov.first.second + y;

				if(!isValid(childX,childY))continue;
				
				if(!vis[childX][childY]){

					q.push({childX,childY});
					vis[childX][childY]=1;

					path[childX][childY]=mov.second;
					v[childX]=x;
					v2[childY]=y;
				}

			}
		}

		for (int i = 0; i < 8; ++i)
		{
			for(auto x:path[i])cout << x << endl;
		}

		// vector<string> rasta;
		// int nx=destX,ny=destY;
 		// while(nx!=sourceX && ny!=destY){
 		// 	nx=v[nx];
 		// 	ny=v2[ny];
 		// 	rasta.push_back(path[nx][ny]);
 		// }
 		// reverse(rasta.begin(),rasta.end());
 		// for(int i=0; i<8; i++)
 		// for(int j=0; j<8; j++)cout << path[i][j] << endl;
 		// for(auto x:rasta){
 		// 	cout << x << endl;
 		// }
}




int32_t main() {
    ios_base::sync_with_stdio(0);

    int tc=1;
    // cin >> tc;
    for (int t = 1; t <= tc; t++) {
       //cout << "Case " << t << ": ";
    	string a,b; cin >> a >> b;
    	bfs(a,b);
       // solve();
    }
    return 0;
}
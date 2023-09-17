#include <bits/stdc++.h>
using namespace std;
/* * * * * * * * * * * 
 *                   *
 *        Hi!        *
 *                   *
 * * * * * * * * * * */
#define int long long
#define endl "\n"
int check(char x){
	if(x=='-'||x=='+')return 1;
	else if(x=='*'|| x=='/')return 2;
	else if(x=='^')return 3;
	else return -1;
}

void solve(string s){
	string p="";
	queue<char> q;
	q.push('(');

	for (int i = 0; i < s.size(); ++i){

		if((s[i]>='A'&&s[i]<='Z') || (s[i]>='a' && s[i]<='z'))
			p+=s[i];
		else if(s[i]=='(')
			q.push(s[i]);
		else{

			if(check(s[i])>check(q.front()))
				q.push(s[i]);
			else{

				if(s[i]!=')'){
					while(!q.empty() && check(s[i])<=check(q.front())){
						p+=q.front();
						q.pop();
					}
					q.push(s[i]);
				}
				else{
					while(!q.empty() && q.front()!='('){
						p+=q.front();
						q.pop();
					}
					// q.push(s[i]);
				}
			}
		}
	}
	cout << p << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(0);

    int tc=1;
    // cin >> tc;
    for (int t = 1; t <= tc; t++) {
       //cout << "Case " << t << ": ";
    	string s; cin >> s;
       solve(s);
    }
    return 0;
}
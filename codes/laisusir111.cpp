#include <bits/stdc++.h>
using namespace std;
/* * * * * * * * * * * 
 *                   *
 *   O.F/O_OF/O_F    *
 *                   *
 * * * * * * * * * * */
#define int long long
#define endl "\n"

int power(char a){
	if(a=='^')return 3;
	if(a=='/'||a=='*')return 2;
	if(a=='+'|| a=='-')return 1;
	return -1;
}


void inToP(){
	string s,ans=""; cin >> s;
	s.push_back(')');
	stack<char> st;
	st.push('(');
	for (int i = 0; i < s.size(); ++i)
	{
		if(s[i]=='(')
			st.push(s[i]);

		else if((s[i]>='A'&& s[i]<='Z') ||(s[i]>='a'&& s[i]<='z'))
			ans+=s[i];
		else if(s[i]!=')'){
			if(power(s[i])>power(st.top()))
				st.push(s[i]);
			else{
					while(power(s[i])>power(st.top()) ){
						ans+=st.top();
						st.pop();
					}
					st.push(s[i]);
				}
			}
		else{
			while(st.top()!='('){
				ans+=st.top();
				st.pop();
			}
			st.pop();
		}	
	}
	cout << ans << endl;
}


void ToHanoi(int n, char a, char b, char c){
	if(n==1){
		cout << a << " -> " << b << endl;
		return;
	}
	ToHanoi(n-1,a,c,b);
	cout << a << " -> " << b << endl;
	ToHanoi(n-1,b,a,c);
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    // cin.tie(false); cout.tie(false);

    int tc=1;
    // cin >> tc;
    for (int t = 1; t <= tc; t++) {
       //cout << "Case " << t << ": ";
    	 int n; cin >> n;
       ToHanoi(n,'A','B','C');
    	inToP();
    }
    return 0;
}
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


void infixToPostfix(){
	string s,ans=""; 
	cin >> s;
	stack<char> st;

	for(int i=0; i<s.size(); i++){

		if(s[i]=='(')
				st.push('(');

		else if(s[i] >= 'A' && s[i] <= 'Z' || s[i] >= 'a'&& s[i] <= 'z')
			ans+=s[i];
		
		else if( s[i]==')' ) {
			while(!st.empty() && st.top()!='('){
				ans+=st.top();
				st.pop();
			}
			if(!st.empty())
				st.pop(); 
		}

		else {
			while(!st.empty() && check(s[i])<=check(st.top()) ){

				ans+=st.top();
				st.pop();
			}
			st.push(s[i]);
		}
	}

	while(!st.empty()){
			ans+=st.top();
			st.pop();
	}
	cout << ans << endl; 
}

int32_t main() {
    infixToPostfix();
    return 0;
}
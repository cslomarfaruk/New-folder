#include <bits/stdc++.h>
using namespace std;
/* * * * * * * * * * * 
 *                   *
 *    2020331556     *
 *                   *
 * * * * * * * * * * */
#define int long long
#define endl "\n"



int sum(char x, int a, int b)
{
    if (x == '+')
        return b + a;
    if (x == '-')
        return b - a;
    if (x == '/')
        return b / a;
    if (x == '*')
        return b * a;
    if (x == '^')
        return pow(b, a);
}

bool check(char x)
{
    return (x >= '0' and x <= '9');
}


void postfixToInfix(string s){

    s+=')';
    int i = 0;
    stack<int> st;

    while (s[i] != ')')
    {
        if (s[i] == ' ')
        {
            i++;
            continue;
        }

        else if (check(s[i]))
        {
            string p="";
            while (check(s[i]))
            {
                p+=s[i];
                i++;
            }
            st.push(stoi(p));
        }
        else
        {
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();
            st.push(sum(s[i], a, b));
        }
        i++;
    }
    cout << st.top();
}


int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s; getline(cin, s);

    postfixToInfix(s);


return 0;
}
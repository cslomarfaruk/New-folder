#include <bits/stdc++.h>
using namespace std;
/* * * * * * * * * * * 
 *                   *
 *        Hi!        *
 *                   *
 * * * * * * * * * * */
#define int long long
#define endl "\n"
#define sortt(a) sort(a.begin(),a.end())

int top,data;
int stack[100];
int MAXSIZE=100;

int pop(int data) {

   if(!isempty()) {
      data = stack[top];
      top = top - 1;   
      return data;
   } else {
      printf("Could not retrieve data, Stack is empty.\n");
   }
}
void push(int data) {
   if(!isFull()) {
      top = top + 1;   
      stack[top] = data;
   } else {
      printf("Could not insert data, Stack is full.\n");
   }
}
bool isempty() {
   if(top == -1)
      return true;
   else
      return false;
}
bool isfull() {
   if(top == MAXSIZE)
      return true;
   else
      return false;
}
int peek() {
   return stack[top];
}

void solve(){
   for(int i=0;i<=20;i++)
      cout <<setprecision(20)<< 1LL*pow(8,i) << endl;

}

int32_t main() {

    int tc=1;

    // cin >> tc;
    for (int t = 1; t <= tc; t++) {
       //cout << "Case " << t << ": ";
       solve();
    }

    return 0;
}
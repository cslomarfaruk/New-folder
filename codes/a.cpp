// #include <bits/stdc++.h>
#include <iostream>
#include <math.h>
#include <cmath>
#include <stack>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <string>
#include <queue>
#include <deque>

using namespace std;
/* * * * * * * * * * * * * * * * * * * * * * * * * *  * * * * * * * * * 
 *                                                                     *
 *                         !(I hate Coding)                            *
 *                                                                     *
 * * * * * * * * * * * * * * * * * * * * * * * * * * ** * * ** * * * * */
#define int long long
#define endl "\n"

// map<char,vector<char>>graph;
// map<char,bool> visited;

// void bfs(char node){
//     queue<char>q;
//     q.push(node);
//     visited[node]=true;

//     while(!q.empty()){
//         char a=q.front();
//         for(auto i:graph[a]){
//             if(!visited[i]){
//                 visited[i]=true;
//                 q.push(i);
//             }       
//         }
//         q.pop();
//     }
// }

const int M=1e9+7;

const int N = 1000000;

vector<int> primes; 

void sieve() {
    vector<bool> isPrime(N + 1, true);
    isPrime[0] = isPrime[1] = false;

    for (int p = 2; p * p <= N; ++p) {
        if (isPrime[p]) {
            for (int i = p * p; i <= N; i += p) {
                isPrime[i] = false;
            }
        }
    }

    for (int p = 2; p <= N; ++p) {
        if (isPrime[p]) {
            primes.push_back(p);
        }
    }
}

void solve(){
    int a;cin>> a;
    map<int,int>p1;
    int ans=1;

    int gcd=a;
    
    for (int i = 0,cnt; i < primes.size() && primes[i] * primes[i] <= gcd; ++i) 
    {   
        cnt=0;
        while(gcd%primes[i]==0){
                gcd/=primes[i];
                p1[primes[i]]++;
            }
    }
    if(gcd>1)p1[gcd]++;
    
    for(auto i:p1){
        ans*=(pow(i.first,i.second)-1)/(i.first-1);
    }
    cout << ans << endl;
}

int32_t main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    sieve();
    int tc=1;
    cin >> tc;
    // cin.ignore();

    for (int t = 1; t <= tc; t++) {
       //cout << "Case " << t << ": ";
      solve();
    }
    return 0;
}

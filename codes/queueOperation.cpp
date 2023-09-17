#include <bits/stdc++.h>
using namespace std;
/* * * * * * * * * * * 
 *                   *
 *   O.F/O_OF/O_F    *
 *                   *
 * * * * * * * * * * */
#define int long long
#define endl "\n"
void solve1(){

	int n,ans=0; cin >> n;

	for (int i = 1; i <= 9; ++i)
	{
		int x=i;
		while(x<=n){
			ans++;
			x=x*10+i;
		}
	}
	cout << ans << endl;

}
void solve(){

	int n; cin >> n;
	bool f=0;
	int a=log10(n),count=a+1;
	double b=log10(n)-a;
	int p=pow(10,b);

cout << p << endl;

	while(n){	
		if(n%10 < p)
			f=1;
		n/=10;
	}

	if(f==0)
		cout << 9*(count-1) + p <<endl;
	else
		cout << 9*(count-1)+p-1 << endl;
}




int32_t main() {
    ios_base::sync_with_stdio(0);

    int tc=1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
       //cout << "Case " << t << ": ";
       // solve490A();
    	// solve_749A();
    	// solve_1520B();
    	solve1();
    }
    return 0;
}
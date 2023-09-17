#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    for(int j=1;j<=t;j++)
    {
        long long d,m,y,e,count=-1;
        cin>>d>>m>>y>>e;
        for(int i=y;i<=e;i++)
        {
        if(d==29 && m==2)
        {
            if((i%400==0) || (i%4==0 && i%100!=0))
            {
                count++;
            }     
        }
        if(d!=29 && m!=2)
        {
            count++;
        }
      }
        cout<<"Case "<<j<<": "<<count<<endl;
    }
    return 0;
}
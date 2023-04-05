#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    ll cnt=0;
    for(int i=0;i<t;i++)
    {
        ll a,b,c,d;
        cin>>a>>b>>c;
        if((a==1&&b==1&&c==1)||(a==1&&b==1&&c==0)||(a==1&&b==0&&c==1)||(a==0&&b==1&&c==1))
        {
            cnt++;
        }
    }
     cout<<cnt<<endl;



    return 0;
}

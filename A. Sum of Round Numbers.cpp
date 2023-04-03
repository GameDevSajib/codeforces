#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
        ll t;
        cin>>t;
        while(t--){
        ll n;
        cin>>n;
        int a[n+5];
        ll k=0;
        ll power=1;
        while(n>0)
        {
           if(n%10>0)
           {
               a[k]=((n%10)*power);
               k++;
           }
           n=n/10;
           power=power*10;
        }
        cout<<k<<endl;
        for(ll i=0;i<k;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
        }






    return 0;
}

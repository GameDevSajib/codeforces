#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll police=0;
    ll crime=0;
    for(ll i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        if(x>0)
        {
            police+=x;
        }
        else{

            if(police<1)
            {
                crime++;
            }
            else{
                police--;
            }
        }
    }
    cout<<crime<<endl;



}

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        ll len=s.size();
        if(len<=10)
        {
            cout<<s<<endl;
        }
        else{
        ll len2=len-2;
        cout<<s[0]<<len2<<s[len-1]<<endl;
        }


    }



    return 0;
}

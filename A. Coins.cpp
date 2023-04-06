#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n, k;
        cin >> n >> k;
        if (n % 2 == 0)
        {
            cout << "YES\n";
            continue;
        }
        if (k % 2 == 0)
        {
            cout << "NO\n";
            continue;
        }
        if (k <= n) cout << "YES\n";
        else cout << "NO\n";

    }



    return 0;
    }

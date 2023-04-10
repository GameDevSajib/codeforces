//BISMILLAH
#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
int main()
{
   ll n,k,x;
   cin>>n>>k;
   while(k--)
   {
       if(n%10==0)
       {
           n=n/10;
       }
       else{
        n=n-1;
       }

   }
   cout<<n<<endl;




    return 0;
}

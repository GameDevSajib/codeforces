#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
   ll t;
   cin>>t;
   while(t--)
   {
      vector<int>v(4);
      for(int i=0;i<4;i++)
      {
          cin>>v[i];
      }
      int maxposition=max_element(v.begin(),v.end())-v.begin();
      int minposition=min_element(v.begin(),v.end())-v.begin();
      if(maxposition+minposition==3)
        cout<<"yes"<<endl;
      else cout<<"no"<<endl;
   }



    return 0;
}

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
        ll cnt1=0,cnt2=0;
        ll t;
        cin>>t;
        while(t--){
        char s1[100005];
        scanf("%s",s1);
        ll len=strlen(s1);
        for(ll i=0;s1[i]!='\0';i++){
        if(((s1[i]=='+')&&(s1[i+1]=='+')&&(s1[i+2]=='X'))||((s1[i]=='X')&&(s1[i+1]=='+')&&(s1[i+2]=='+')))
        {
            cnt1++;
        }
        if(((s1[i]=='-')&&(s1[i+1]=='-')&&(s1[i+2]=='X'))||((s1[i]=='X')&&(s1[i+1]=='-')&&(s1[i+2]=='-')))
        {
            cnt2--;
        }
        }
        }
             if(cnt1==cnt2) cout<<0<<endl;
         else if(cnt1!=cnt2){

               cout<<(cnt1+cnt2)<<endl;
             }



    return 0;
}

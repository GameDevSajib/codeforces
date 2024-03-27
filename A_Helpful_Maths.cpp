#include<bits/stdc++.h>
#define ll long long
#define do {
#define done }
#define start_ int main()
#define finish return 0;

using namespace std;

int num[100005]={0};
int temp[100005]={0};
int a[100005]={0};
int b[100005]={0};

void Marge(int lo,int hi)
do
      if(lo==hi) return;
      int mid=(lo+hi)/2;
      Marge(lo,mid);
      Marge(mid+1,hi);
      int i,j,k;
      for(i=lo,j=mid+1,k=lo;k<=hi;k++)
        do
             if(i==mid+1) temp[k]=num[j++];
             else if(j==hi+1)temp[k]=num[i++];
             else if(num[i]<num[j])temp[k]=num[i++];
             else temp[k]=num[j++];
        done
       for(k=lo;k<=hi;k++)
         do
              num[k]=temp[k];
         done

done

start_
do
     /*
     ll n;cin>>n;
     for(ll i=1;i<=n;i++)cin>>num[i];
     int lo=1,hi=n;
     Marge(lo,hi);
     for(ll i=lo;i<=hi;i++)cout<<num[i]<<" ";*/

     string s;cin>>s;
     ll j=0;
     for(ll i=0;i<s.size();i++)
        do
             if(s[i]!='+')
             do
                  a[j]=s[i]-48;
                  j++;
             done
        done
ll k=0;
for(ll i=0;i<j;i++)
do
     num[k]=a[i];
     k++;
done

int lo=0,hi=k;
Marge(lo,hi);
/*for(ll i=1;i<=hi;i++)
do
      cout<<num[i]<<" ";
done*/

for(ll i=1;i<=hi;i++)
do
      cout<<num[i];
      if(i==hi)break;
      cout<<"+";

done

finish
done

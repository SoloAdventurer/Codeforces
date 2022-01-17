#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
int main()
{
   long long k=0,n=0,w=0,ans=0;
 
   cin>>k>>n>>w;
 
   for(long long i=1;i<=w;i++){
        ans+=k*i;
   }
 
   if(ans>n){
        cout<<ans-n;
   }else
        cout<<"0";
 
   return 0;
}
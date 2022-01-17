#include <bits/stdc++.h>
#define PB push_back
#define MP make_pair
#define FOR(i,a,b) for(int i = a; i <= b; ++i)
#define FOR(i,a) for(int i=0;i<(a);++i)
typedef unsigned ui;
typedef long long ll;
using namespace std;
    
    int main() {
        /*freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);*/

        ios::sync_with_stdio(0);
        cin.tie(0);
    
        string s1,s2,s3;
        cin>>s1>>s2>>s3;
        auto n=s1+s2;
     
        sort(n.begin(),n.end());
        sort(s3.begin(),s3.end());
     
        if(s3==n)cout<<"YES";
        else cout<<"NO";
     
        return 0;
}
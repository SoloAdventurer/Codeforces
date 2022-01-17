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
 
    map<int,int> ma;
    ll first=0,second=0;
 
    int n,y,q,x;
    cin>>n;
 
    for(int i=0;i<n;i++){
        cin>>y;
        ma[y]=i;
    }
 
    cin>>q;
 
    for(int i=0;i<q;i++){
        cin>>x;
 
        first+=ma[x]+1;
        second+=n-ma[x];
    }
 
    cout<<first<<" "<<second;
 
        return 0;
    }
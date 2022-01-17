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
 
        int n,sum=0;
        cin>>n;
        string s;
 
        while(cin>>s){
            if(s=="++X"||s=="X++"){
                ++sum;
            }
            else
                --sum;
        }
 
        cout<<sum;
 
        return 0;
    }
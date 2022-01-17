        #include <bits/stdc++.h>
        #define PB push_back
        #define MP make_pair
        #define FOR(i,a,b) for(int i = a; i <= b; ++i)
        #define FOR(i,a) for(int i=0;i<(a);++i)
        typedef long long ll;
        using namespace std;
     
     
        int main() {
            /*freopen("input.txt","r",stdin);
            freopen("output.txt","w",stdout);*/
     
            ios::sync_with_stdio(0);
            cin.tie(0);
     
            string a,b;
            cin>>a>>b;
     
            for(int i=0;i<a.length();++i){
             if(a[i]==b[i]){
                cout<<0;
             }
             else if(a[i]!=b[i]){
                cout<<1;
             }
             else{
                cout<<0;
             }
            }
     
            return 0;
        }
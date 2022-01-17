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
     
            int n,t;
            string s;
            cin>>n>>t>>s;
     
            for(int i=0;i<t;++i){
                    for(int a=0;a<n;++a){
                        if(s[a]=='B' && s[a+1]=='G'){
                        s[a]='G';
                        s[a+1]='B';
                        ++a;
                    }
                }
            }
     
            cout<<s;
     
            return 0;
        }
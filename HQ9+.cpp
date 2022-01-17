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
     
            string s;
            cin>>s;
     
            for(int i=0;i<s.length();++i){
                    if(s[i]=='H'||s[i]=='Q'||s[i]=='9'){
                        cout<<"YES";
                        return 0;
                    }
            }
     
            cout<<"NO";
     
            return 0;
        }
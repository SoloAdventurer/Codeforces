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
     
            string s;
     
            cin>>s;
     
            int n=0,m=0;
     
            for(int i=0;i<s.length();++i){
                if(isupper(s[i])){
                    n++;
                }
                else{
                    m++;
                }
            }
     
            if(n>m){
                for(char g: s){
                    cout<<(char) toupper(g);
                }
            }
            else{
                for(char g: s){
                   cout<<(char) tolower(g);
                }
            }
     
            return 0;
        }
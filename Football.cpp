        #include <bits/stdc++.h>
        #define PB push_back
        #define MP make_pair
        #define REP(i,a,b) for (int i = a; i <= b; i++)
        typedef long long ll;
        using namespace std;
     
     
        int main() {
            /*freopen("input.txt","r",stdin);
            freopen("output.txt","w",stdout);*/
     
            ios::sync_with_stdio(0);
            cin.tie(0);
     
            unsigned n=1;
            string s;
            cin>>s;
     
         for(auto i=0;i<s.length();++i){
              if(s[i]==s[i-1]){
                   ++n;
                   if(n==7){
                        cout<<"YES";
                        return 0;
                   }
              }
              else{
                   n=1;
              }
         }
     
         cout<<"NO";
     
            return 0;
        }
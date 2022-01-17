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
     
            string n;
            cin>>n;
     
            ll sum=0;
     
            for(int i=0;i<n.length();++i){
                    if(n[i]=='4'||n[i]=='7'){
                        ++sum;
                    }
            }
     
            if(sum==4 || sum==7){
                cout<<"YES";
            }
            else{
                cout<<"NO";
            }
     
            return 0;
        }
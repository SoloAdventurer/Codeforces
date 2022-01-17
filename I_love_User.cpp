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
     
            int n,points;
     
            cin>>n>>points;
     
            int mn(points),mx(points),total(0);
     
            while(--n){
                cin>>points;
                if(points<mn){
                    mn=points;
                    ++total;
                }
                if(points>mx){
                    mx=points;
                    ++total;
                }
            }
     
            cout<<total;
     
            return 0;
        }
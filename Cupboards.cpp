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
     
            int n,l,r,Ltotal=0,Rtotal=0;
            cin>>n;
     
         for(int i=0;i<n;++i){
                cin>>l>>r;
                Ltotal+=l;
                Rtotal+=r;
        }
     
            cout<<min(Ltotal,n-Ltotal)+min(Rtotal,n-Rtotal);
     
            return 0;
        }
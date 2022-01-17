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
     
            ll n;
            int ans=3;
            vector<ll> vec;
     
            while(cin>>n){
                vec.push_back(n);
            }
     
            sort(vec.begin(),vec.end());
     
            for(int i=0;i<3;++i){
                    if(vec[i]!=vec[i+1]){
                        --ans;
                    }
            }
     
            cout<<ans;
     
            return 0;
        }
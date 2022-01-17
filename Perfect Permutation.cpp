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
     
            unsigned n;
            cin>>n;
     
            if(n&1){
                cout<<-1;
                return 0;
            }
     
            for(auto a=2,b=1;a<=n;a+=2, b+=2){
                cout<<a<<" "<<b<<" ";
            }
     
            return 0;
        }
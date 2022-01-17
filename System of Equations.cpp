

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
     
        unsigned n,m,sum=0;
     
        cin>>n>>m;
     
        unsigned mx=max(n,m);
     
        for(unsigned a=0;a<=mx;++a){
            for(unsigned b=0;b<=mx;++b){
                if((b*b)+a==m && (a*a)+b==n){
                    ++sum;
                }
            }
        }
     
        cout<<sum;
        return 0;
    }
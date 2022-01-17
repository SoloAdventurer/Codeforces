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
     
            int n;
     
            cin>>n;
     
            for(int i=n+1;;++i){
                unsigned a=i%10,b=i/10%10,c=i/100%10,d=i/1000%10;
                if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){
                    cout<<i;
                    return 0;
                }
            }
     
            return 0;
        }
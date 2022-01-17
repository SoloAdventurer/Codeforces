

    #include <bits/stdc++.h>
    #include <cstdlib>
    typedef long long ll;
    typedef unsigned uI;
    using namespace std;
     
     
    int main() {
        int n=0, total=0;
        cin>>n;
     
        for(int i=0; i<n; ++i){
            int x,y,z;
            cin>>x>>y>>z;
     
            if((x+y+z)>=2){
                total++;
            }
        }
     
        cout<<total;
     
        return 0;
    }
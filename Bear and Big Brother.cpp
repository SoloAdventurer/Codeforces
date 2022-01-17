    #include <bits/stdc++.h>
    #include <cstdlib>
    typedef long long ll;
    typedef unsigned uI;
    using namespace std;
     
     
    int main() {
        int a=0,b=0,i=0;
     
        cin>>a>>b;
     
        while(a<=b){
            a*=3;
            b*=2;
            i++;
        }
     
        cout<<i;
     
        return 0;
    }
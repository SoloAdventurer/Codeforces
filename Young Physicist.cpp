    #include <bits/stdc++.h>
    typedef long long ll;
    typedef unsigned uI;
    using namespace std;
     
     
    int main() {
       long long n=0,sumX=0,sumY=0,sumZ=0,x=0,y=0,z=0;
       cin>>n;
     
     
        while(n--){
            cin>>x>>y>>z;
            sumX+=x;
            sumY+=y;
            sumZ+=z;
       }
     
       if(sumX==0 && sumY==0 && sumZ==0){
        cout<<"YES";
       }
       else {
        cout<<"NO";
       }
     
        return 0;
    }
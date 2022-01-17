    #include <bits/stdc++.h>
    typedef long long ll;
    using namespace std;
     
     
    int main() {
        ll total=0,pos=0;
     
        cin>>total>>pos;
     
        if(pos<=((total+1)/2)){
            cout<<2*pos-1;
        }
        else{
            cout<<(pos-(total+1)/2)*2;
        }
     
        return 0;
    }
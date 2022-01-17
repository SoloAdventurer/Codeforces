    #include <bits/stdc++.h>
    typedef long long ll;
    using namespace std;
     
     
    int main() {
        double sum=0,x=0,n=0;
     
        cin>>n;
     
        for(int i=0;i<n;i++){
            cin>>x;
            sum+=(x/100);
        }
     
        cout<<(sum/n)*100.0;
     
        return 0;
    }
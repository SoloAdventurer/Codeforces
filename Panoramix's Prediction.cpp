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
     
        int n,m,ans=0;
        cin>>n>>m;
     
        for(int i=n+1;i<50;i++){
            if(i==2 || i==3 || i==5 || i==7 || i==11){
                ans=i;
                break;
            }
            else if((i%11)!=0 && (i%2)!=0 && (i%3)!=0 && (i%5)!=0 && (i%7)!=0){
                ans=i;
                break;
            }
        }
     
        if(m==ans){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
     
        return 0;
    }
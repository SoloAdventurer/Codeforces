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
    int maxvalue=0;
    int minvalue=1000;
    int maxindex=0;
    int minindex=0;
    cin>>n;
    for(int i=0;i<n;i++){
    	int x;
    	cin>>x;
    if(x>maxvalue){
    	maxindex=i;
    	maxvalue=x;
    }
     if(x<=minvalue){
    	minindex=i;
    	minvalue=x;
     }
    }
    //cout<<maxindex<<"   max"<<minindex<<"min\n";
    if(maxindex>minindex){
    	cout<<(maxindex-1)+(n-minindex)-1;
    }
    else{
    	cout<<(maxindex-1)+(n-minindex); 
    }
    return 0;
}
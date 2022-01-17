#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n=0,k=0,counter=0,in=0;
    vector<int> lol;
    cin>>n>>k;
 
    while(cin>>in){
        lol.push_back(in);
    }
 
    for(auto g:lol){
        if(g>=lol[k-1] && g>0){
            counter++;
        }
    }
 
    cout<<counter;
 
    return 0;
}
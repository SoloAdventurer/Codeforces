#include <bits/stdc++.h>
using namespace std;
 
int main()
{
  string s,newS;
 
  getline(cin,s);
 
  for(auto g:s){
    if(g!='+'){
        newS.push_back(g);
    }
  }
 
    sort(newS.begin(),newS.end());
 
    for(int i=0;i<newS.size()-1;++i){
        cout<<newS[i]<<'+';
    }
 
    cout<<newS[newS.size()-1];
 
   return 0;
}
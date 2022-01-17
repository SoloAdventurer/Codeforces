    #include <bits/stdc++.h>
    typedef long long ll;
    typedef unsigned uI;
    using namespace std;
     
     
    int main() {
        string gender;
     
        cin>>gender;
     
        int a=0;
        sort(gender.begin(),gender.end());
     
        for(int i=1;i<gender.length();i++){
            if(gender[i]!=gender[i-1]){
                a++;
            }
        }
     
        if(a%2==0){
            cout<<"IGNORE HIM!";
        }else{
            cout<<"CHAT WITH HER!";
        }
     
        return 0;
    }
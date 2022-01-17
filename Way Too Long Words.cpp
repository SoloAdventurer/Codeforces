    #include <bits/stdc++.h>
     
    using namespace std;
     
     
    int main() {
     
        string word;
        int n=0;
     
        cin>>n;
     
        while(n--){
            cin>>word;
            if(word.length()>10){
            int total=word.length()-2;
            cout<<word[0]<<total<<word[word.length()-1]<<"\n";
        }
        else{
            cout<<word<<"\n";
            }
        }
     
        return 0;
    }
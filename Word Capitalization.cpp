    #include <bits/stdc++.h>
    typedef long long ll;
    typedef unsigned uI;
    using namespace std;
     
     
    int main() {
        string word;
     
        cin>>word;
     
        char cap= toupper(word[0]);
     
        string new_word=word.substr(1,word.size());
     
        cout<<cap+new_word;
     
        return 0;
    }
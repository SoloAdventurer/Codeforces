

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
     
            int x = 0;
        for (int i = 1; i <= 5; ++i)
        {
            for (int j = 1; j <= 5; ++j)
            {
                cin >> x;
                if (x == 1)
                {
                    cout << abs(i - 3) + abs(j - 3) << endl;
                }
            }
        }
     
            return 0;
        }
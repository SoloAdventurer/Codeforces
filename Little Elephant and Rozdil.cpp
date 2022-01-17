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
     
       int n, time, min_time(1000000001), min_index(0), count(1);
        scanf("%d", &n);
        for (int i = 1; i <= n; ++i)
        {
            scanf("%d", &time);
            if (time < min_time)
            {
                min_time = time;
                min_index = i;
                count = 1;
            }
            else if (time == min_time)
            {
                count += 1;
            }
        }
        if (count == 1)
        {
            printf("%d\n", min_index);
        }
        else
        {
            printf("Still Rozdil\n");
        }
        return 0;
    }
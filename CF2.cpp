#include <bits/stdc++.h>
#define int long long
#define mod 1e9+7
using namespace std;

void init_code()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE
}

int32_t main() 
{
    init_code();
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int T=1;
    cin >> T;
    while (T--)
    {
        /*  
        */
        int n;
        cin >> n;
        string s[n];
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }
        int maxi = 0;
        for (int i = 97; i <= 102; i++)
        {
            int ans = 0;
            for (int k = 0; k < n; k++)
            {
                int cnt = 0;
                for (int j = 0; j < s[k].length(); j++)
                {
                    if (s[k][j] == i)
                        cnt++;
                }
                if (cnt > s[k].length()-cnt)
                    ans++;
            }
            cout << ans << " ";
            maxi = max(ans, maxi);
        }
        cout << maxi << "\n";
    }    
}   

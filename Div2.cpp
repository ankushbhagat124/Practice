#include <bits/stdc++.h>
#define int long long
using namespace std;
void init_code()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE
}

signed main() 
{
    init_code();
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        vector <int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        if (n > 2)
        {
            int ans = 0, ans2 = 0, final = 0;
            for (int i = 0, j = n-1, k = 0; i <= n-2; i++,j--,k++)
            {
                ans =  (n-2-i)*v[j];
                ans2 =  (n-2-i)*v[k];
                if (ans2 - ans > 0)
                    continue;
                else
                    final = final + (ans2 - ans);
            }
            cout << final << "\n";
        }
        else
        {
            cout << 0 << "\n";
        }
    }
}
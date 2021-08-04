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

signed main() 
{
    init_code();
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        vector <int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        if (n == 1)
            cout
        for (int i = 0; i < n; i++)
        {
            if (accumulate(v.begin(), v.begin()+i, 0) == accumulate(v.begin()+i+1, v.end(), 0))
            {
                cout << i << "\n";
                return 0;
            }
        }
        cout << -1 << "\n";
    }
}

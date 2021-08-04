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
        int n, x, t;
        cin >> n >> x >> t;
        int cnt = min((t / x), n);
        cout << (n - cnt) * cnt + ((cnt * (cnt - 1)) /2 ) << "\n";
    }
}

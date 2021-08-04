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
    int T = 1;
    while (T--)
    {
        int n, q;
        cin >> n >> q;
        string s;
        cin >> s;
        vector<int> pref(n+1, 0);
        pref[0] = 0;
        for (int i = 0; i < n; i++) 
        {
            pref[i+1] = (s[i]-'a'+1) + pref[i];
        }
        while (q--)
        {
            int l, r, ans = 0;
            cin >> l >> r;
            cout << pref[r] - pref[l-1] << "\n";
        }
    }
}
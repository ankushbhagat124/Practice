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
        int count = 0;
        int n, k, x;
        cin >> n >> k >> x;
        vector <int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        sort ( v.begin(), v.end());
        for (int i = 0; i < n-1; i++)
        {
        
            if (v[i+1] - v[i] > x)
            {
                count++;
            }
        }
        if (count <= k)
            cout << k;
        else
            cout << count;
        cout << "\n";
    }
}
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
        vector <pair <int,int>> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back({x,i+1});
        }
        sort (v.begin(), v.end());
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                if (v[i].first*v[j].first == v[i].second + v[j].second)
                    count++;
                if (v[i].first*v[j].first > 2*n)
                    break;
            }
            if (i != n - 1 && (v[i].first * v[i + 1].first > 2 * n))
                break;
        }
        cout << count << "\n";
    }
}
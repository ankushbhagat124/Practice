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
        vector <int> v,v1;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
            v1.push_back(i+1);
        }
        int mn = *min_element(v.begin(), v.end());
        if (count(v.begin(), v.end(), mn) == v.size())
        {
            cout << v1.size() << "\n";
            for (int i = 0; i < n; i++)
            {
                cout << v1[i] << " ";
            }
        }
        else
        {
            int cum_sum = 0;
            for (int i = 0; i < v.size(); i++)
            {
                int min = *min_element(v.begin(), v.end());
                auto it = find(v.begin(), v.end(), min);
                cum_sum = cum_sum + min;
                v.erase(it);
                if (count(v.begin(),v.end(),min) == 0)
                {
                    v1.erase(it);
                }
                else
                    break;
            }
            cout << v1.size() << "\n";
            for (int i = 0; i < v1.size(); i++)
            {
                cout << v1[i] << " ";
            }
        }
        cout << "\n";
    }
}
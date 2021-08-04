#include <bits/stdc++.h>
using namespace std;
int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int T;
    cin >> T;
    while (T--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int count = 0;
        int mini = min(min(a,b),c);
        int flag = 0;
        while (mini >= 0)
        {
            count = count + (a-mini) + (b-mini) + (c-mini);
            if (count%7 == 0 && count != 0)
            {
                flag = 1;
                break;
            }
            a = mini;
            b = mini;
            mini--;
            c = mini;
        }
        if (flag == 1)
            cout << 1;
        else
            cout << 0;
        cout << "\n";
    }
}
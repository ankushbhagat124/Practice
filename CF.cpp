/*  Read
    Formalize
    Invent
    Prove
    Implement
    Test Implementations
    Debug
    Submit
*/
#include <bits/stdc++.h>
#define int long long
using namespace std;
clock_t startTime;
double getCurrentTime() {
    return (double)(clock() - startTime) / CLOCKS_PER_SEC;
}
void init_code()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE
}

signed main() 
{
    startTime = clock();
    init_code();
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int T = 1;
    while (T--)
    {
        int w1,h1,w2,h2;
        cin >> w1 >> h1 >> w2 >> h2;
        cout << w1+2*h1+2+2*h2+2+w2+(w1-w2);
    }
    /*double sec = getCurrentTime();
    cout << sec <<"\n";*/
}
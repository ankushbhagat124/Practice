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
        int maxFreq(string s, int maxLetters, int minSize, int maxSize) {
        unordered_map<string, int> m;
        int max_freq = 0;
        
        for (int i = 0; i < s.size() - minSize + 1; i++) 
        {
            string temp = s.substr(i,minSize);
            unordered_set<char> st(temp.begin(), temp.end());
            if (st.size() <= maxLetters) 
            {
                m[temp]++;
                max_freq = max(max_freq, m[temp]);
            }
        }
      
        return max_freq;
        int maxFreq(string s, int maxLetters, int minSize, int maxSize) {
        // map to count frequencies.
        unordered_map<string, int> m;
        // keep a count of max frequency found.
        int max_freq = 0;
        
        for (int i = 0; i < s.size() - minSize + 1; i++) {
            string temp = s.substr(i,minSize);
            // make a set and compare size to check unique
            // characters in substrings < maxLetters.
            unordered_set<char> st(temp.begin(), temp.end());
            if (st.size() <= maxLetters) {
                m[temp]++;
                max_freq = max(max_freq, m[temp]);
            }
        }
      
        return max_freq;
    }
}


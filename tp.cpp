#include<bits/stdc++.h>
using namespace std;
void init_code()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE
}
int main ()
{
	init_code();
	string s; //Inital String
    cin >> s; 
    string st; //substring to be deleted
    cin >> st;

    string::size_type i = s.find(st);

    if (i != string::npos)
        s.erase(i, st.length());

    cout << s;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, open = 0, close = 0;
        string s;
        cin >> n >> s;
        for (size_t i = 0; i < n; i++)
        {
            if (s[i] == '(')
                ++open;
            else
                ++close;
        }
        if (open == close)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}
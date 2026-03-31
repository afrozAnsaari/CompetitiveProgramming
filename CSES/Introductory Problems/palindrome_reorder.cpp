#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    unordered_map<char, int> mp;
    int val = 0;
    for (char c : s)
        ++mp[c];
    if (s.size() == 1)
    {
        cout << s << '\n';
        return;
    }
    if (s.size() & 1)
    {
        for (auto &p : mp)
        {
            if (p.second & 1)
                ++val;
        }
        if (val > 1)
        {
            cout << "NO SOLUTION\n";
            return;
        }
    }
    else
    {
        for (auto &p : mp)
        {
            if ((p.second & 1))
            {
                cout << "NO SOLUTION\n";
                return;
            }
        }
    }
    return 0;
}
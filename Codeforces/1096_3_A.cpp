#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        bool ans = (!(x & 1) || !(y & 1));
        if (ans == true)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}
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
        ll a, b;
        cin >> a >> b;
        bool is_mod_3 = ((a + b) % 3 == 0);
        bool is_not_big = (max(a, b) <= 2 * min(a, b));
        if (is_mod_3 && is_not_big)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
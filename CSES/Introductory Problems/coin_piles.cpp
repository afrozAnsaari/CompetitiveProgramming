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
        if ((a + b) % 3 == 0)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}
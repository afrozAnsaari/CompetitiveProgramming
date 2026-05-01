#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t, x, k = 0;
    vector<pair<ll, ll>> ans;
    cin >> t >> x;
    vector<ll> a(t + 1);
    for (ll &i : a)
        cin >> i;

    ans.push_back({0, a[0]});
    for (int i = 1; i <= t; i++)
    {
        if (abs(a[i] - ans[k].second) >= x)
        {
            ans.push_back({i, a[i]});
            ++k;
        }
    }

    for (auto &p : ans)
    {
        cout << p.first << " " << p.second << '\n';
    }
    return 0;
}
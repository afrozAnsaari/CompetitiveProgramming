#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    unordered_map<int, int> mp;
    for (int &i : a)
        cin >> i;
    for (int &i : a)
    {
        if (mp.count(i))
        {
            cout << -1 << '\n';
            return;
        }
        else
        {
            ++mp[i];
        }
    }
    sort(a.begin(), a.end());
    for (int i = n - 1; i >= 0; i--)
    {
        cout << a[i] << ' ';
    }
    cout << '\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
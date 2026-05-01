#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, ans = 0;
    double x = 0.5;
    cin >> n;
    vector<int> arr(n);
    for (ll &i : arr)
        cin >> i;
    for (int i = 0; i < n; i++)
    {
        if (x > 0 && x - ((double)arr[i]) < 0)
            ++ans;
        if (x < 0 && x + ((double)arr[i]) > 0)
            ++ans;
        if (x > 0)
            x -= ((double)(arr[i]));
        if (x < 0)
            x += ((double)(arr[i]));
    }
    cout << ans << '\n';
    return 0;
}
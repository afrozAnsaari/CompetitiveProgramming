#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    string s;

    cin >> n;
    cin >> s;
    int i = 0;
    while (i < n && s[i] == 'o')
        ++i;
    cout << s.substr(i) << '\n';
    return 0;
}
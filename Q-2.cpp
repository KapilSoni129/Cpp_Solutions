#include <bits/stdc++.h>
using namespace std;

#define int long long



int solve()
{
    int n;
    string s;
    cin >> n >> s;
    int cnt = 0;
    for (int i = (n + 1) / 2; i < n; i++)
    {
        if (s[i] != s[n / 2])
            break;
        cnt += 2;
    }
    cnt += n % 2;
    cout << cnt << '\n';
    return 0;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
        cout << solve() << '\n';
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 1; i <= (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main()
{
    int n, k;
    cin >> n >> k;

    int ans = 0;
    rep(i, n)
    {
        rep(j, n)
        {
            int t = k - i - j;
            if (t > 0 && t <= n)
                ans++;
        }
    }

    cout << ans << endl;
    return 0;
}

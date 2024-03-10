#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main()
{
    string n;
    cin >> n;
    int ans = 0;

    reverse(n.begin(), n.end());
    rep(i, n.length())
    {
        int c = (1 << i);
        ans += (n[i] - '0') * c;
    }

    cout << ans << endl;
    return 0;
}

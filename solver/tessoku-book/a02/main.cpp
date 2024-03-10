#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main()
{
    int n, x;
    cin >> n >> x;

    int a[100];

    rep(i, n)
    {
        cin >> a[i];
    }

    rep(i, n)
    {
        if (a[i] == x)
        {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}

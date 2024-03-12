#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main()
{
    int d, n;
    cin >> d >> n;

    vector<int> A(d + 1, 0), S(d + 2, 0);

    rep(i, n)
    {
        int l, r;
        cin >> l >> r;
        A[l] += 1;
        A[r + 1] -= 1;
    }

    for (int i = 1; i <= d; i++)
    {
        S[i] = S[i - 1] + A[i];
    }

    for (int i = 1; i <= d; i++)
    {
        cout << S[i] << endl;
    }

    return 0;
}

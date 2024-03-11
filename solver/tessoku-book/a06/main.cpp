#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main()
{
    int n, q;
    cin >> n >> q;

    vector<int> A(n);
    rep(i, n)
    {
        cin >> A[i];
    }

    vector<int> L(q), R(q);
    rep(i, q)
    {
        cin >> L[i] >> R[i];
    }

    vector<int> S(n);
    S[0] = A[0]; // S[0] = 0 として次のインデックスからやったほうが綺麗
    for (int i = 1; i < n; i++)
    {
        S[i] = S[i - 1] + A[i];
    }

    rep(i, q)
    {
        cout << S[R[i] - 1] - S[L[i] - 2] << endl;
    }
    return 0;
}

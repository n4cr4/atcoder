#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main()
{
    int T, N;
    cin >> T >> N;

    vector<int> A(T + 1, 0), S(T + 1, 0);
    rep(i, N)
    {
        int L, R;
        cin >> L >> R;
        A[L] += 1;
        A[R] -= 1;
    }

    S[0] = A[0];
    for (int i = 1; i <= T; i++)
    {
        S[i] = A[i] + S[i - 1];
    }

    for (int i = 0; i < T; i++)
    {
        cout << S[i] << endl;
    }

    return 0;
}

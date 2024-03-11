#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main()
{
    int n;
    cin >> n;

    vector<int> A(n);
    rep(i, n)
    {
        cin >> A[i];
    }

    int q;
    cin >> q;

    vector<int> L(q), R(q);
    rep(i, q)
    {
        cin >> L[i] >> R[i];
    }

    vector<int> S_win(n + 1), S_lose(n + 1);
    S_win[0] = 0;
    S_lose[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        S_win[i] = S_win[i - 1] + A[i - 1];
        if (A[i - 1] == 0)
        {
            S_lose[i] = S_lose[i - 1] + 1;
        }
        else
        {
            S_lose[i] = S_lose[i - 1];
        }
    }
    // かっこつけてインクリメント演算子(++)使うとそれ自体が書き換わるから無茶苦茶になる

    rep(i, q)
    {
        int p_win = S_win[R[i]] - S_win[L[i] - 1];
        int p_lose = S_lose[R[i]] - S_lose[L[i] - 1];
        if (p_win > p_lose)
        {
            cout << "win" << endl;
        }
        else if (p_win == p_lose)
        {
            cout << "draw" << endl;
        }
        else
        {
            cout << "lose" << endl;
        }
    }
    return 0;
}

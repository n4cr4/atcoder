#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main()
{
    int H, W, Q;
    cin >> H >> W;

    int X[H][W];

    rep(i, H)
    {
        rep(j, W)
        {
            cin >> X[i][j];
        }
    }

    cin >> Q;
    int A[Q], B[Q], C[Q], D[Q];
    rep(i, Q)
    {
        cin >> A[i] >> B[i] >> C[i] >> D[i];
    }

    vector<vector<int>> Z(H + 1, vector<int>(W + 1, 0));
    for (int i = 1; i <= W; i++)
    {
        for (int j = 1; j <= H; j++)
        {
            Z[j][i] = Z[j][i - 1] + X[j - 1][i - 1];
        }
    }
    for (int j = 1; j <= H; j++)
    {
        for (int i = 1; i <= W; i++)
        {
            Z[j][i] = Z[j - 1][i] + Z[j][i];
        }
    }

    // for (int j = 1; j <= H; j++)
    // {
    //     for (int i = 1; i <= W; i++)
    //     {
    //         cout << Z[j][i] << " ";
    //     }
    //     cout << endl;
    // }

    rep(i, Q)
    {
        cout << Z[C[i]][D[i]] - Z[C[i]][B[i] - 1] - Z[A[i] - 1][D[i]] + Z[A[i] - 1][B[i] - 1] << endl;
    }

    return 0;
}

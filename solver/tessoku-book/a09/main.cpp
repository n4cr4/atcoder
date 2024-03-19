#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main()
{
    int H, W, N;
    cin >> H >> W >> N;

    int A[N], B[N], C[N], D[N];
    rep(i, N)
    {
        cin >> A[i] >> B[i] >> C[i] >> D[i];
    }
    int Z[H + 2][W + 2];
    rep(i, H + 1)
    {
        rep(j, W + 1)
        {
            Z[i][j] = 0;
        }
    }

    rep(i, N)
    {
        Z[A[i]][B[i]] += 1;
        Z[C[i] + 1][D[i] + 1] += 1;
        Z[A[i]][D[i] + 1] -= 1;
        Z[C[i] + 1][B[i]] -= 1;
    }

    for (int i = 1; i <= H; i++)
    {
        for (int j = 1; j <= W; j++)
        {
            Z[i][j] = Z[i - 1][j] + Z[i][j];
        }
    }

    for (int j = 1; j <= W; j++)
    {
        for (int i = 1; i <= H; i++)
        {
            Z[i][j] = Z[i][j - 1] + Z[i][j];
        }
    }

    for (int i = 1; i <= H; i++)
    {
        for (int j = 1; j <= W; j++)
        {
            cout << Z[i][j];
            if (j != W)
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}

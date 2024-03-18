#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main()
{
    int W, B;
    cin >> W >> B;

    int W_s[W + B + 14], B_s[W + B + 14];
    W_s[0] = 0;
    B_s[0] = 0;
    string s = "wbwbwwbwbwbw";
    for (int i = 1; i <= (W + B) + 14; i++)
    {
        if (s[(i - 1) % 12] == 'w')
        {
            W_s[i] = W_s[i - 1] + 1;
            B_s[i] = B_s[i - 1];
        }
        else
        {
            W_s[i] = W_s[i - 1];
            B_s[i] = B_s[i - 1] + 1;
        }
    }

    // rep(i, W + B + 14)
    // {
    //     cout << W_s[i] << " " << B_s[i] << endl;
    // }

    rep(i, 12)
    {
        if (W_s[i + W + B] - W_s[i] == W)
        {
            if (B_s[i + W + B] - B_s[i] == B)
            {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
    return 0;
}

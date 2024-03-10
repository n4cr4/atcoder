#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main()
{
    int n;
    cin >> n;

    vector<int> A(n);

    rep(i, 0, n)
    {
        cin >> A[i];
    }

    rep(i, 0, n)
    {
        rep(j, i + 1, n)
        {
            rep(k, j + 1, n)
            {
                if (A[i] + A[j] + A[k] == 1000)
                {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "No" << endl;

    return 0;
}

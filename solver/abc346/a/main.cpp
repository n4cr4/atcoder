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

    int A[n + 5];
    rep(i, n)
    {
        cin >> A[i];
    }

    rep(i, n - 1)
    {
        cout << A[i] * A[i + 1];
        if (i != n - 2)
        {
            cout << " ";
        }
    }

    cout << endl;

    return 0;
}

#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main()
{
    int A, B;
    cin >> A >> B;

    rep(i, A, B + 1)
    {
        if (100 % i == 0)
        {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}

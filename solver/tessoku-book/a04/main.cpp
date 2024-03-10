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

    int out[10] = {0};
    int i = 0;

    while (n != 0)
    {
        out[i] = n % 2;
        n = n / 2; // shift 演算での表現がすごくきれstoiい
        i++;
    }

    rep(i, 10)
    {
        cout << out[9 - i];
    }
    cout << endl;

    return 0;
}

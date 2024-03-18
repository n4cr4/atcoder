#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main()
{
    unsigned long long n, k;
    cin >> n >> k;

    set<unsigned long long> A;
    rep(i, n)
    {
        unsigned long long tmp;
        cin >> tmp;
        A.insert(tmp);
    }

    unsigned long long sum = 0;
    sum = (k + 1) * k / 2;

    for (auto itr = A.begin(); itr != A.end(); ++itr)
    {
        if (*itr <= k)
        {
            sum -= *itr;
        }
    }

    cout << sum << endl;

    return 0;
}

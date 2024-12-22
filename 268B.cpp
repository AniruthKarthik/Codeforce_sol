#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long f = 0, nf;
    cin >> nf;
    int ans = nf;
    nf--;
    while (nf > 0)
    {
        ans += (f + 1) * nf;
        nf--;
        f++;
    }
    cout << ans;

    return 0;
}
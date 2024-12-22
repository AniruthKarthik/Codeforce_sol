#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long z, n;
    int ans = -1;
    cin >> z >> n;
    for (int x = 0; pow(2, x) <= n; x++)
    {
        for (int y = 0; pow(3, y) <= n; y++)
        {
            if (z * (pow(2, x)) * (pow(3, y)) == n)
            {
                cout << x + y << endl;
                return 0;
            }
        }
    }
    cout << ans;
    return 0;
}
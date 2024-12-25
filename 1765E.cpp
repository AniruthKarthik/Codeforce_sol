#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("outputtt.txt", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        long long n = 0, a = 0, b = 0, e = 0;
        cin >> n >> a >> b;
        if (a <= b)
        {
            e = (n % a > 0) ? ((n / a) + 1) : (n / a);
        }
        else
        {
            e = 1;
        }
        cout << e << endl;
    }
    return 0;
}
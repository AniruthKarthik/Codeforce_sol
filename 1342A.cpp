#include <iostream>
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

    int t;
    cin >> t;
    while (t--)
    {
        long long x, y, a, b, dol = 0;
        cin >> x >> y >> a >> b;

        while (x > 0 && y > 0)
        {
            if (b < 2 * a)
            {
                dol += min(x, y) * b;
            }
            else
            {
                dol += min(x, y) * 2 * a;
            }
            long long temp = min(x, y);
            x -= temp;
            y -= temp;
        }

        dol += max(x, y) * a;

        cout << dol << endl;
    }

    return 0;
}

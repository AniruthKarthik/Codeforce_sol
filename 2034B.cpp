#include <vector>
#include <iostream>
#include <string>
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
        int n, m, k, c = 0, ans = 0;
        string l;
        vector<int> vec;
        cin >> n >> m >> k >> l;
        for (int i=0; i < n; i++)
        {
            if (l[i] == '0')
            {
                c++;
                if (c == m)
                {
                    ans++;
                    c = 0;
                    i += k - 1;
                }
            }
            else
            {
                c = 0;
            }
        }
        cout << ans << endl;
    }
    return 0;
}

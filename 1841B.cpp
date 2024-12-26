#include <iostream>
#include <vector>
using namespace std;
void process_test_case()
{
    int q;
    cin >> q;
    vector<int> a;
    string result;
    bool rotated = false;

    for (int i = 0; i < q; ++i)
    {
        int x;
        cin >> x;

        if (a.empty())
        {
            a.push_back(x);
            result += '1';
        }
        else
        {
            if (!rotated && x >= a.back())
            {
                a.push_back(x);
                result += '1';
            }
            else if (!rotated && x <= a[0])
            {
                a.push_back(x);
                result += '1';
                rotated = true;
            }
            else if (rotated && x >= a.back() && x <= a[0])
            {
                a.push_back(x);
                result += '1';
            }
            else
            {
                result += '0';
            }
        }
    }
    cout << result << "\n";
}

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
        process_test_case();
    }

    return 0;
}

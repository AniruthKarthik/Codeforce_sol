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

    long long a, b, c, d;
    vector<vector<int>> drag;

    cin >> a >> b;

    while (b--) {
        cin >> c >> d;
        drag.push_back({c, d});
    }

    sort(drag.begin(), drag.end(), [](const vector<int>& x, const vector<int>& y) {
        return x[0] < y[0]; 
    });

    for (auto& vec : drag) {
        if (a > vec[0]) { 
            a += vec[1]; 
        } else {
            cout << "NO" << endl; 
            return 0;
        }
    }

    cout << "YES" << endl; 
    return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);  
    freopen("output.txt", "w", stdout); 
#endif

    int t;
    cin >> t;

    while (t--) {
        int n, b, c, d;
        cin >> n >> b >> c >> d;  
        vector<int> m(n);
        for (int i = 0; i < n; ++i) {
            cin >> m[i]; 
        }

        int lastm = 0;
        bool flag = true;

        for (int i = 0; i < n; ++i) {
            int time_diff = m[i] - lastm;
            long long phone_on_cost = (long long)time_diff * c;
            long long turn_off_on_cost = (long long)d;

            b -= min(phone_on_cost, turn_off_on_cost);

            if (b <= 0) {
                flag = false;
                break;
            }

            lastm = m[i];  
        }

        if (flag) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}

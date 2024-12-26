#include <iostream>
#include <vector>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("outputtt.txt", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> vec(n);
        for (int i = 0; i < n; i++) {
            cin >> vec[i];
        }

        long long oddsum = 0, evensum = 0;
        long long odd = 0, even = 0;

        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) { 
                evensum += vec[i];
                even++;
            } else { 
                oddsum += vec[i];
                odd++;
            }
        }

        if ((odd == 0 || evensum % even == 0) && (even == 0 || oddsum % odd == 0) &&
            (odd == 0 || even == 0 || (oddsum / odd == evensum / even))) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}

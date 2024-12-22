#include <iostream>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);  
    freopen("output.txt", "w", stdout); 
    #endif

    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;
        if ((n & (n - 1)) == 0) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }

    return 0;
}

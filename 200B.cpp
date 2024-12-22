#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    long double p = 0;

    int original_t = t; 
    while (t--) {
        int n;
        cin >> n;
        p += n;
    }

    cout << (p / original_t) << endl; 
}

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); 

    int t;
    cin >> t;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        int ab = max(b, c) - min(b, c); 
        int ac = max(a, c) - min(a, c); 
        int bc = max(b, a) - min(b, a);  
        
        cout << (ab % 2 == 0) << " " << (ac % 2 == 0) << " " << (bc % 2 == 0) << "\n";
    }

    return 0;
}

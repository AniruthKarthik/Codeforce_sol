#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);  
    freopen("output.txt", "w", stdout); 
    #endif

    int t;
    cin >> t;

    while (t--) {
        int a;
        string b;
        cin >> a >> b;
        vector<int> c;
        for (char i : b) {
            if (i == 'U') {
                c.push_back(1);
            } else {
                c.push_back(0);
            }
        }
        int n = 0;
        while (true) {
            bool found = false;
            for (int j = 0; j < c.size(); j++) {
                if (c[j] == 1) {
                    found = true;
                    if (c.size() == 1) {
                        c.erase(c.begin());
                    } else if (c.size() == 2) {
                        c.erase(c.begin() + j);
                    } else {
                        c[(j - 1 + c.size()) % c.size()] ^= 1; 
                        c[(j + 1) % c.size()] ^= 1;           
                        c.erase(c.begin() + j);               
                    }
                    n++;
                    break;
                }
            }
            if (!found) break; 
        }
        if (n % 2 != 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}

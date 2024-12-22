#include <iostream>
#include <string>
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
        int a, b;
        cin >> a >> b;

        vector<vector<char>> vec(a, vector<char>(b));
        vector<int> hashrow(a, 0);
        vector<int> hashcol(b, 0); 

        for (int i = 0; i < a; i++) {
            for (int j = 0; j < b; j++) {
                cin >> vec[i][j];
                if (vec[i][j] == '#') {
                    hashrow[i]++;  
                    hashcol[j]++;  
                }
            }
        }

        auto maxr = max_element(hashrow.begin(), hashrow.end());
        int h = distance(hashrow.begin(), maxr) + 1; 

        auto maxc = max_element(hashcol.begin(), hashcol.end());
        int k = distance(hashcol.begin(), maxc) + 1;

        cout << h << " " << k << endl;
    }

    return 0;
}

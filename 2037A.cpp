#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t; 
    while (t--) {
        int n, score = 0;
        cin >> n; 
        vector<int> vec(n);

        for (int i = 0; i < n; i++) {
            cin >> vec[i];
        }
        unordered_map<int, int> freq;
        for (int num : vec) {
            freq[num]++;
        }
        for(auto &count:freq){
            score+=count.second /2;
        }
        cout<<score<<endl;
    }

    return 0;
}

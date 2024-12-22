#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string input;
    cin >> input;
    input.erase(remove(input.begin(), input.end(), '+'), input.end());
    sort(input.begin(), input.end());
    for (int i = 0; i < input.length(); i++) {
        cout << input[i];
        if (i < input.length() - 1) {
            cout << "+"; 
        }
    }

    return 0;
}

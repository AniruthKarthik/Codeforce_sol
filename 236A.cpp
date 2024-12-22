#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() {
    string username;
    cin >> username;

    set<char> distinct_characters(username.begin(), username.end());

    if (distinct_characters.size() % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}

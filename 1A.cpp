#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long a, b, c; 
    cin >> a >> b >> c; 

  
    a = (a/c)+(a%c!=0);
    b = (b/c)+(b%c!=0);
    cout << a*b << endl;
    return 0;
}

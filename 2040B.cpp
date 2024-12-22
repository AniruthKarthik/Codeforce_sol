#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int ans[100001];  
    ans[1] = 1;
    int x = 1, j = 2;
    
    
    for (int i = 2; j <= 100000; i++) {
        x = x * 2 + 2;
        while (j <= x && j <= 100000) {
            ans[j] = i;
            j++;
        }
    }
    
    
    int t;
    cin >> t;

    
    while (t--) {
        int a;
        cin >> a;
        cout << ans[a] << endl;
    }

    return 0;
}

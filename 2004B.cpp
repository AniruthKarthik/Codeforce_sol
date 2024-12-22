
#include <iostream>
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

    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c, d, n;
        cin >> a >> b >> c >> d;
        int lo=max(a,c);
        int hi=min(b,d);
        if(lo>hi){
            cout<<1<<endl;
        }else{
            n=hi-lo;
            if(min(a,c)<lo) n++;
            if(max(b,d)>hi) n++;
            cout<<n<<endl;
        }
    }
    return 0;
}

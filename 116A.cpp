#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    int tram=0;
    int ans=0;
    while (t--) {
        int a,b;
        cin >> a>>b;
        tram-=a;
        tram+=b;
        ans=(tram>ans)? tram:ans;
        
    }
    cout<<ans<<endl;
    return 0;
}
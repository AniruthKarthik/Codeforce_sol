#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t; 
    while (t--) {
        int a, b;
        cin >> a >> b;
        int result = 0;

        if (a >= b) {
            result = a; 
        } else {
            if((a*2)<=b){
                result=0;
            }
            else{
                result=(2*a-b);
            }
    }
    cout<<result<<endl;

}return 0;
}
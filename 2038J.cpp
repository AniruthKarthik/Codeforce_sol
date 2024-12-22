#include <iostream>
using namespace std;

int main() {
    int t,p=0;
    cin>>t;
    while(t--){
        char a;
        int x;
        cin>>a>>x;
        if(a=='P'){
            p+=x;
        }
        if(a=='B'){
            if (x-p>0){
                p=0;
                cout<<"YES"<<endl;
            }else{
                p-=x;
                cout<<"NO"<<endl;
            }
        }

    }

    return 0;
}

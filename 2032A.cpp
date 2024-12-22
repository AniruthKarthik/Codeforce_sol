#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t; 
    while (t--) {
        int n,a,b,minimum,maximum;
        cin >> n;
        vector<int>vec(2*n);
        for(int i=0;i<2*n;i++){
            cin>>vec[i];
        }
        unordered_map<int,int>m;
        for(int num:vec){
            m[num]++;
        }
        a=m[0];
        b=m[1];
        minimum=b%2;
        maximum=min(a,b);
        cout<<minimum<<" "<<maximum<<endl;
        }

     return 0;   
    }


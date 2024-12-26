#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("outputtt.txt", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--)
    {
        long long m,a,b,c,m1,m2;
        cin>>m>>a>>b>>c;
        m1=m;
        m2=m;
        int ans=0;
        if(m1>=a){
            m1-=a;
            ans+=a;
 
        }else{
            ans+=m1;
            m1=0;
 
        }
       
        if(m2>=b){
            m2-=b;
            ans+=b;
 
        }else{
            ans+=m2;
            m2=0;
        }
      
        if(m1+m2>c){
            ans+=c;
        }else{
            ans+=(m1+m2);
        }
    
        cout<<ans<<endl;
        
}   
 
 
return 0;    }
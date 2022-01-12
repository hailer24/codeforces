#include <bits/stdc++.h>
using namespace std;

        
int main(){

    // freopen("../input.txt","r",stdin);
    // freopen("../output.txt","w",stdout);

    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int mx = max(a,(b,c));
        int _a, _b, _c;
        _a = max(b,c) - a + 1;
        _b = max(a,c) - b + 1;
        _c = max(b,a) - c + 1;
        cout<<max(_a,0)<<" "<<max(_b,0)<<" "<<max(_c,0)<<endl;
         
    }  
  return 0;
}
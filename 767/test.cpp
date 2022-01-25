#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef vector<int> vi;
typedef pair<int,int> pi;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i <= b; i++)
int in(){
    int temp;
    cin>>temp;
    return temp;
}

void solve(){
    int n = in(); int k = in();
    while(k > 3){
        cout<<1<<" ";
        k--;n--;
    }
    if(n%2){
        cout<<n/2<<" "<<n/2<<" "<<1<<endl;
    }
    else if(n%4){
        cout<<n/2-1<<" "<<n/2-1<<" "<<2<<endl;
    }
    else cout<<n/2<<" "<<n/4<<" "<<n/4<<endl;

}

        
signed main(){
    #ifndef ONLINE_JUDGE
    freopen("../input.txt","r",stdin);
    freopen("../output.txt","w",stdout);
    #endif // ONLINE_JUDGE

    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }

    
  
  return 0;
}

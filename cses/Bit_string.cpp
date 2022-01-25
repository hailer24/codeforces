#include <bits/stdc++.h>
using namespace std;
// #define int long long
typedef vector<int> vi;
typedef pair<int,int> pi;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(a,b) for (int i = a; i <= b; i++)
int in(){
	int temp;
	cin>>temp;
	return temp;
}
#define MOD 1000000007

void solve(){
	int n;
	cin>>n;
	int ret = 1;
	REP(0,n-1){
		ret = (ret*2)%MOD;
	}

	cout<<ret<<endl;

}

		
signed main(){
	#ifndef ONLINE_JUDGE
	freopen("../input.txt","r",stdin);
	freopen("../output.txt","w",stdout);
	#endif // ONLINE_JUDGE

	int t = 1;
	// cin>>t;
	while(t--){
		solve();
	}

	
  
  return 0;
}

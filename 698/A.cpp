#include <bits/stdc++.h>
using namespace std;
#define int long long
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

void solve(){
	int n = in();
	vi arr(n,0);
	int prev = 0, ret = 0;
	for(int i = 0;i<n;i++){
		int _t = in();
		arr[_t-1]++;
	}
	for(auto x:arr){
		// cout<<x<<" ";
		ret = max(ret,x);
	}
	cout<<ret<<endl;

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

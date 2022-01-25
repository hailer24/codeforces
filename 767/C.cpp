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
	int n = in();
	vi arr(n,0), st(n+1,0);
	for(int &x:arr)x = in();
	vector<vi> dp(n+1,vi(n+1,0));
	for(int i = 1;i<=n;i++){
		for(auto &x:st)x = 0;
		for(int j = i;j<=n;j++){
			st[arr[j-1]] = 1;
			if(arr[j-1] >= dp[i][j-1]){
				int k = 0;
				while(st[k])k++;
				dp[i][j] = k;
				// for(auto x:st)cout<<x<<" ";
				// cout<<endl;
			}
			else dp[i][j] = dp[i][j-1];
		}
	}
	vi ret;
	int i = 1;
	for(int j = 1;j<=n && i <= n;j++){
		if(dp[i][j] == dp[i][n]){
			ret.PB(dp[i][j]);
			i = j+1;
		}

	}
	cout<<ret.size()<<endl;
	for(auto x:ret)cout<<x<<" ";
	cout<<endl;

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

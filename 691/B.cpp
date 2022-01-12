#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
	int n;
	cin>>n;
	vector<int> dp(n+1);
	dp[0] = 1;
	dp[1] = 4;
	// dp[2] = 4;
	for(int i = 2;i<=n;i++){
		if(i%2){
			dp[i] = dp[i-2] + 2*(i+1);
		}
		else dp[i] = dp[i-2] + i + 1;
	}
	// for(auto x:dp)cout<<x<<" ";
	cout<<dp[n]<<endl;
}

		
int main(){

	// freopen("../input.txt","r",stdin);
	// freopen("../output.txt","w",stdout);

	int t;
	// cin>>t;
	t = 1;
	while(t--){
		solve();
	}

	
  
  return 0;
}

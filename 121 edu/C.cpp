#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
	int n;
	cin>>n;
	vector<ll> h(n),k(n);
	for(auto &x:k)cin>>x;
	for(auto &x:h)cin>>x;
	ll ret = 0,curr = n-1;
	// cout<<"------"<<endl;
	for(int i = n-2;i>=0;i--){
		// cout<<ret<<" "<<h[curr]<<" "<<k[curr]<<endl;
		if(h[curr] > k[curr] - k[i]){
			h[curr] = max(h[curr],h[i] + k[curr] - k[i]);
		}
		else {
			ret+=(h[curr]*(h[curr] +1))/2;
			curr = i;
		}
	}
	// cout<<ret<<" "<<h[curr]<<" "<<k[curr]<<endl;
	ret+=(h[curr]*(h[curr] +1))/2;
	cout<<ret<<endl;
}

		
int main(){

	// freopen("../input.txt","r",stdin);
	// freopen("../output.txt","w",stdout);

	int t = 1;
	cin>>t;
	while(t--){
		solve();
	}

	
  
  return 0;
}

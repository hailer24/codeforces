#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
	ll n;
	cin>>n;
	vector<ll> v(n);
	ll sum = -n;
	for(auto& x:v){
		cin>>x;
		sum += x;
	}
	// cout<<sum;
	sort(v.begin(),v.end());
	ll k = 0;
	ll ret = sum;
	for(ll i = 1;pow(i,n-1) <= sum+v[n-1];i++){
		ll curr = 0;
		// cout<<endl<<i<<endl;
		for(ll j = 0;j<n;j++){
			// cout<<pow(i,j)<<" "<<v[j]<<endl;
			curr+=abs(v[j]-pow(i,j));
		}
		ret = min(ret,curr);
	}
	cout<<ret<<endl;
}

		
int main(){

	// freopen("../input.txt","r",stdin);
	// freopen("../output.txt","w",stdout);

	ll t = 1;
	// cin>>t;
	while(t--){
		solve();
	}

	
  
  return 0;
}

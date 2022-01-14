#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll solve(){
	int n;
	cin>>n;
	vector<ll> a(n);
	map<ll,ll> mp;
	ll sum = 0;

	for(auto& x:a){
		cin>>x;
		sum+=x;
	}
	if((sum*2)%n)return 0;
	ll left = (sum*2)/n;
	ll ret = 0;
	for(ll i = 0;i<n;i++){
		ret+=mp[left-a[i]];
		mp[a[i]]++;
	}
	return ret;
}

		
int main(){

	// freopen("../input.txt","r",stdin);
	// freopen("../output.txt","w",stdout);

	int t = 1;
	cin>>t;
	while(t--){
		cout<<solve()<<endl;
	}

	
  
  return 0;
}

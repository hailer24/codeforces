#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
	ll n;
	cin>>n;
	vector<ll>a(n),b(n);
	ll ret = n*(n-1)*(n-2)/6;
	map<ll,ll> mp_a,mp_b;
	for(int i = 0;i<n;i++){
		cin>>a[i]>>b[i];
		mp_b[b[i]]++;
		mp_a[a[i]]++;
	}
	for(int i= 0;i<n;i++){
		ret-=(mp_a[a[i]]-1)*(mp_b[b[i]]-1);
	}
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

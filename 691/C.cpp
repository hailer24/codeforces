#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
	int n,m;
	cin>>n>>m;
	vector<ll> a(n),b(m);
	long long mn = -1, idx_mn = 0; 
	for(int i = 0;i<n;i++){
		cin>>a[i];
		if(mn == -1){
			mn = a[i];
			idx_mn = 0;
		}
		if(mn > a[i]){
			idx_mn = i;
			mn = a[i];
		}

	}
	for(auto& x:b)cin>>x;
	ll pt = 0;
	for(int i = 0;i<n;i++){
		if(idx_mn!=i)pt = __gcd(pt,a[i] - a[idx_mn]);
	}
	for(int i = 0;i<m;i++){
		cout<<__gcd(pt,a[idx_mn] + b[i])<<" ";
	}


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
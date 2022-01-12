#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin>>n;
	vector<int> vec(n);
	int mx = INT_MIN, sm = 0;
	for(int i = 0;i<n;i++){
		cin>>vec[i];
		sm+=vec[i];
		mx = max(vec[i],mx);
	}
	int ret = 0;
	for(int i = 1;i<=n;i++){
		int _t = 0, k;
		if(sm%i !=0)continue;
		k = sm/i;
		if(k < mx)continue;
		for(int i = 0;i<n;i++){
			if(vec[i] == k && _t!=0)break;
			_t = (_t+vec[i]);
			if(_t > k)break;
			_t = _t%k;
		}
		if(_t == 0)ret = i;

	}
	cout<<n - ret<<endl;
}

		
int main(){

	// freopen("../input.txt","r",stdin);
	// freopen("../output.txt","w",stdout);

	int t;
	cin>>t;
	while(t--){
		solve();
	}

	
  
  return 0;
}

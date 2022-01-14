#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
	int n;
	cin>>n;
	unordered_map<int,vector<int>> mp;
	int temp;
	for(int i = 0;i<n;i++){
		cin>>temp;
		mp[temp].push_back(i);
	}
	int ret = -1;
	for(auto x:mp){
		if(x.second.size() > 1){
			int _n = x.second.size();
			for(int i = 0;i<_n-1;i++){
					ret = max(ret,n+x.second[i] - x.second[i+1]);
			}
		 // cout<<mx<<" "<<mn<<" "<<ret<<endl;
		}

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

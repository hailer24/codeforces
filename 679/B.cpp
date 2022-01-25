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
	int m = in();
	int _t;
	unordered_map<int,vector<int>> mp;
	for(int i = 0;i<n;i++){
		for(int j = 0;j<m;j++){
			_t = in();
			mp[_t].push_back(j);

		}
	}
	for(int i = 0;i<m;i++){
		for(int j = 0;j<n;j++){
			_t = in();
			mp[_t].push_back(j);
		}
	}
	vector<vector<int>> ret(n,vector<int>(m,0));
	for(auto x:mp){
		ret[x.second[1]][x.second[0]] = x.first;
	}
	for(auto x:ret){
		for(auto y:x)cout<<y<<" ";
		cout<<endl;
	}

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

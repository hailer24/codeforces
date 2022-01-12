#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
	int n,k;
	cin>>n>>k;
	unordered_map<char,int> mp;
	string s;
	cin>>s;
	for(auto x:s)mp[x]++;
	int t = 0, c = 0;
	for(auto x:mp){
		t+=x.second/2;
		c+=x.second%2;
	}
	// cout<<t<<" "<<c<<endl;
	int ret = 0;
	ret = (t/k)*2;
	if((t%k)*2 + c >= k)ret++;
	cout<<ret<<endl;
	

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

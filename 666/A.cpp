#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
	int n;
	cin>>n;
	vector<int> chars(26,0);
	for(int i = 0;i<n;i++){
		string temp;
		cin>>temp;
		for(auto x:temp)chars[x-'a']++;
	}
	string ret = "YES";
	for(auto x:chars){
		if(x%n)ret = "NO";
	}
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

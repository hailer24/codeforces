#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
	int n;
	cin>>n;
	string s,t;
	cin>>s>>t;
	string ret = "YES";
	for(int i = 0;i<n;i++){
		if(s[i] == t[i] && s[i] == '1')ret = "NO";
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

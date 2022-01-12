#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	if(n<4){
		cout<<"No"<<endl;
		return;
	}
	for(int i = 0;i<5;i++){
		string _t = s.substr(0,i) + s.substr(n - 4 + i,4-i);
		if(_t == "2020"){
			cout<<"Yes"<<endl;
			return;
		}
	}
	cout<<"No"<<endl;
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

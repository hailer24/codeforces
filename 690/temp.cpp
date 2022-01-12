#include <bits/stdc++.h>
using namespace std;
#define ll long long

void chk(string s,int idx, string ret){
	cout<<ret<<endl;
	if(idx = s.size()){
		cout<<ret<<endl;
		return;
	}
	if(s[idx] - '0' == 1){
		chk(s,idx+1,ret + char(s[idx] - '0' + 'a'));
		if(idx < s.size()-1)chk(s,idx+2,ret + char(stoi(s.substr(idx,2)) + 'a'));	
	}
	else if(s[idx] - '0' == 2){
		chk(s,idx+1,ret + char(s[idx] - '0' + 'a'));
		if(idx < s.size()-1 && s[idx+1] - '0' < 7)chk(s,idx+2,ret + s.substr(idx,2));	
	}
	else {
		chk(s,idx+1,ret + char(s[idx] - '0' + 'a'));
	}


}

void solve(){
	string s;
	cin>>s;
	chk(s,0,"lol");
	
}

		
int main(){

	freopen("../input.txt","r",stdin);
	freopen("../output.txt","w",stdout);

	int t;
	cin>>t;
	while(t--){
		solve();
	}

	
  
  return 0;
}
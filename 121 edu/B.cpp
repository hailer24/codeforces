#include <bits/stdc++.h>
using namespace std;
#define ll long long

string solve(){
	string s;
	cin>>s;
	for(int i = s.size()-1;i>0;i--){
		int _t = (s[i-1] - '0')+(s[i]-'0') ;
		if(_t>9){s[i-1] = _t/10 + '0';s[i] = _t%10 + '0'; return s;}
	}
	s[1] = (s[0]- '0')  + (s[1] - '0')+'0';
	return s.substr(1,s.size()-1);
}

		
int main(){

	// freopen("../input.txt","r",stdin);
	// freopen("../output.txt","w",stdout);

	int t = 1;
	cin>>t;
	while(t--){
		cout<<solve()<<endl;
	}

	
  
  return 0;
}

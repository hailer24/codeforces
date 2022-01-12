#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin>>n;
	string s;
	if (n > 45){cout<<-1<<endl;return;}
	for(int i = 9;i>0;i--){
		if(n >= i){s= char(i+'0') + s; n-=i;}
	}
	cout<<s<<endl;
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

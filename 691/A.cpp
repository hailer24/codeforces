#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
	int n;
	cin>>n;
	vector<char> r(n),b(n);
	for(auto& x:r )cin>>x;
	for(auto& x:b )cin>>x;
	int cnt = 0;
	for(int i = 0;i<n;i++){
		// cout<<r[i]<<" "<<b[i]<<endl;
		if(r[i] > b[i])cnt++;
		else if(r[i] < b[i]) cnt--;
	}
	// cout<<cnt<<endl;
	if(cnt > 0)cout<<"RED"<<endl;
	else if(cnt == 0)cout<<"EQUAL"<<endl;
	else cout<<"BLUE"<<endl;
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

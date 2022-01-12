#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
	int n;
	cin>>n;
	int mx = 0;
	int mn = INT_MAX,temp;
	for(int i = 0;i<n;i++){
		cin>>temp;
		mx = max(mx,temp);
		mn = min(mn,temp);
	}
	cout<<mx-mn<<endl;
	
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

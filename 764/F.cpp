#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
	int n;cin>>n;
	int l = 1, r = n-1;
	int added = 0;
	int ret = 0;
	while(l<r){
		int m = (l+r+1)/2;
		int in;
		if(added%n == (n-m)%n){
			in = ret;
		}
		else {
			int g = (n-m)%n;
			int val = g-added%n;
			if(val<0) val+=n;
			added+=val;
			cout<<"+ "<< val<<endl;
			cin>>in;
		}
		ret = in;
		if(ret == added/n){
			r = m-1;
		}
		else l = m;
	}
	cout<<"! "<<l+added<<endl;
}

		
int main(){

	// freopen("../input.txt","r",stdin);
	// freopen("../output.txt","w",stdout);

	int t = 1;
	// cin>>t;
	while(t--){
		solve();
	}

	
  
  return 0;
}

#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin>>n;
	vector<int> vec(n);
	for(int i =0;i<n;i++)cin>>vec[i];
	int l = 0, r = n-1;
	while(l<r){
		cout<<vec[l++]<<" "<<vec[r--]<<" ";
	}
	if(n%2)cout<<vec[l]<<" ";
	cout<<endl;
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

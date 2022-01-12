#include <bits/stdc++.h>
using namespace std;

		
int main(){

	// freopen("../input.txt","r",stdin);
	// freopen("../output.txt","w",stdout);

	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> vec(n,0),ret(n,0);
		for(int i = 0;i<n;i++)cin>>vec[i];
		int idx = -1, mx = INT_MIN;
		for(int i = n-1;i>=0;i--){
			ret[i] = i+vec[i] < n ? ret[i+vec[i]] + vec[i] : vec[i];
			mx = max(mx,ret[i]);
		}
		cout<<mx<<endl;


	}

	
  
  return 0;
}
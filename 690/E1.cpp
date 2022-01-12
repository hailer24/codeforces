#include <bits/stdc++.h>
using namespace std;

void solve(){
	//cout<<"-----------"<<endl;
	int n;
	cin>>n;
	unordered_map<int,int> mp;
	vector<int> vec(n);
	for(int i = 0;i<n;i++){
		cin>>vec[i];
		mp[vec[i]]++;
	}
	long long ret = 0;
	sort(vec.begin(),vec.end());
	long long r = 2;
	for(long long i = 0;i<n;i++){
		while( r < n && vec[r] - vec[i] <= 2)r++;
		r--;
		if(r-i >= 2){
			ret+=((r-i)*(r-i-1))/2;
		}
	}
	cout<<ret<<endl;
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

#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n,k;
	cin>>n>>k;
	std::vector<int> nums(k,0);
	for(int i = 0;i<k;i++){
		cin>>nums[i];
	}
	sort(nums.rbegin(),nums.rend());
	int t = 0, ret = 0;
	for(int i = 0;i<k;i++){
		t += n - nums[i];
		if(t >= n)break;
		ret++;

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
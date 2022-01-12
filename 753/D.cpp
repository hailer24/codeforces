#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin>>n;
	std::vector<int> nums(n,0);
	for(int i = 0;i<n;i++){
		cin>>nums[i];
	}
	sort(nums.begin(),nums.end());
	int ret = 0;
	for(int i = 1;i<n;i++){
		ret = __gcd(nums[i]-nums[0],ret);
	}
	if(ret == 0)cout<<-1<<endl;
	else cout<<ret<<endl;
	}

		
int main(){

	freopen("../input.txt","r",stdin);
	freopen("../output.txt","w",stdout);
	cout<<__gcd(0,5);
	int t;
	cin>>t;
	while(t--){
		solve();
	}

	
  
  return 0;
}
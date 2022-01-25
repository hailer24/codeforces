#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef vector<int> vi;
typedef pair<int,int> pi;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i <= b; i++)
int in(){
	int temp;
	cin>>temp;
	return temp;
}

void solve(){
	int n = in();
	vi arr(2*n,0);
	for(auto& x:arr)x = in();
	sort(arr.begin(),arr.end());
	int curr = 0;
	for(int i = n-1;i>=0;i--){
		if(arr[2*i]!=arr[2*i+1]){
			// cout<<curr<<" "<<arr[i]<<endl;
			cout<<"NO"<<endl;
			return;
		}
		arr[2*i] -= curr*2;
		if(arr[i] > 0 && arr[2*i]%(2*(i+1)) == 0){
			curr+=arr[2*i]/(2*(i+1));
		} 
		else {
			// cout<<curr<<" "<<arr[i]<<endl;
			cout<<"NO"<<endl;
			return;
		}
	}
	cout<<"YES"<<endl;
}

		
signed main(){
	#ifndef ONLINE_JUDGE
	freopen("../input.txt","r",stdin);
	freopen("../output.txt","w",stdout);
	#endif // ONLINE_JUDGE

	int t = 1;
	cin>>t;
	while(t--){
		solve();
	}

	
  
  return 0;
}

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
	vi strings(6,0);
	for(auto& x:strings)x = in();
	sort(strings.begin(),strings.end());
	int n = in();
	vector<vi> arr;
	for(int i = 0;i<n;i++){
		int _t = in();
		vi _p;
		for(auto x:strings)_p.push_back(_t-x);
		arr.push_back(_p);
	}
	sort(arr.rbegin(),arr.rend());
	int ret = INT_MIN;
	for(auto x:arr){
		for(auto y:x)cout<<y<<" ";
		cout<<endl;
	}
	for(int i =1;i<n;i++){
		int curr = 5;
		while(curr>=0 && arr[i][curr] <= arr[0][5])curr--;
		ret = max(ret,arr[0][5] - arr[i][curr+1]);
	}
	cout<<ret;
}

		
signed main(){
	#ifndef ONLINE_JUDGE
	freopen("../input.txt","r",stdin);
	freopen("../output.txt","w",stdout);
	#endif // ONLINE_JUDGE

	int t = 1;
	// cin>>t;
	while(t--){
		solve();
	}

	
  
  return 0;
}

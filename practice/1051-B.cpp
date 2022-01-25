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
	int l = in(), r = in();
	cout<<"YES"<<endl;
	for(int i = l;i<=r;i+=2){
		cout<<i<<" "<<i+1<<endl;
	}
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

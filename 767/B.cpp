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

bool solve(){
	int l = in(), r = in(), k = in();
	if(l == r && l == 1)return 0;
	// cout<<l<<" "<<r<<" "<<k<<endl;
	if(k == 0 && l == r)return 1;
	int req = (r-l+1)/2;
	if(l&1 && r&1)req++;
	return req <= k;
}

		
signed main(){
	#ifndef ONLINE_JUDGE
	freopen("../input.txt","r",stdin);
	freopen("../output.txt","w",stdout);
	#endif // ONLINE_JUDGE

	int t = 1;
	cin>>t;
	while(t--){
		if(solve() == 1)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}

	
  
  return 0;
}

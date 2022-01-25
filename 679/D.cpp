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
	vector<pair<int,int>> pr;
	int n = in();
	for(int i = 0;i<2*n;i++){
		char s;
		cin>>s;

		if(s == '-'){
			pr.PB(MP(-1,in()));
		}
		else pr.PB(MP(1,-1));
	}
	int bal = 0;
	for(auto x:pr){
		bal+=
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

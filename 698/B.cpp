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
	int n = in(),d = in();
	// vi d_tar(10,0);
	// for(int i = 1;i<=10;i++)d_tar[(d*i)%10] = d*i;
	vi arr(n,0);
	for(auto &x:arr)x = in();
	// for(auto x:d_tar)cout<<x<<" ";
	for(auto x:arr){
		if(x >= d*10)cout<<"YES"<<endl;
		else {
	bool ret = false;
			for(int i = 1;i<10;i++){
				int _t = x-i*d;
				// cout<<x<<" "<<_t<<endl;
				if(_t >= 0 && _t%10 == 0){ret = true;break;}
			}
			if(ret)cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
			}
		}
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

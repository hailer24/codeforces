#include <bits/stdc++.h>
using namespace std;

long MOD = 1000000007;


long long ch(long long n, long long r){
	if (r == 0) return 1;
	if(r > n)return 0;
	if (r > n / 2) return ch(n, n - r); 
	long ret = 1; 

    for (int k = 1; k <= r; ++k)
    {
        ret *= n - k + 1;
        ret /= k;
    }

    return ret;
}

void solve(){
	//cout<<"-----------"<<endl;
	int n,k,m;
	cin>>n>>m>>k;
	vector<int> vec(n);
	for(int i = 0;i<n;i++){
		cin>>vec[i];
	}
	long long ret = 0;
	sort(vec.begin(),vec.end());
	for(int l = 0;l<n;l++){
		int r = l+1;
		while(r < n && vec[r] - vec[l] <= k)r++;
		r--;
		ret += ch(r-l,m-1);
		// cout<<ch(r-l-1,m-1)<<" ";
		ret = ret%MOD;
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

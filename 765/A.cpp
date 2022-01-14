#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
	int n = 1,l;
	cin>>n>>l;
	vector<int> v(l);
	for(int i = 0;i<n;i++){
		int t;
		cin>>t;
		for(int j = 0;j<l;j++){
			if(t%2)v[j]++;
			t/=2;
		}
	}
	int ret = 0;
	for(int i = 0;i<l;i++){
		if(v[i]*2>n)ret+=pow(2,i);
	}
	cout<<ret<<endl;
}

		
int main(){

	freopen("../input.txt","r",stdin);
	freopen("../output.txt","w",stdout);

	int t;
	cin>>t;
	while(t--){
		solve();
	}

	
  
  return 0;
}
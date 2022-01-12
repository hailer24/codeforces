#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<int> pow2;

void solve(){
	int n;
	cin>>n;
	vector<bool> vec(n+1);
	int temp;

	for(int i = 0;i<n;i++){
		cin>>temp;
		while(temp > n){
			temp/=2;
		}
		while(vec[temp] == true && temp){
			temp/=2;
		}
		vec[temp] = true;
	}
	string ret = "YES";
	for(int i = 1;i<=n;i++){
		if(vec[i] == 0)ret = "NO";
	}
	cout<<ret<<endl;
	
}

		
int main(){

	// freopen("../input.txt","r",stdin);
	// freopen("../output.txt","w",stdout);
	int k = 2;
	while(k <= 10e9){
		pow2.push_back(k);
		k *=2;
	}
	int t;
	cin>>t;
	while(t--){
		solve();
	}

	
  
  return 0;
}

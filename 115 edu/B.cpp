#include <bits/stdc++.h
using namespace std;
#define ll long long

void solve(){
	int n;
	cin>>n;
	vector<vector<int>> a(n,vector<int>(5,0));

	for(auto& x:a){
		for(int i = 0;i<5;i++){
			cin>>x[i];
		}
	}
	string ret = "NO";
	for(int i = 0;i<5;i++){
		for(int j = i+1;j<5;j++){
			int _i = 0,_j = 0, i_j = 0;
			for(int k = 0;k<n;k++){
				if(a[k][i] == 1 && a[k][j] == 1)i_j++;
				else if(a[k][i] == 1)_i++;
				else if(a[k][j] == 1)_j++;
				// cout<<a[k][i]<<" "<<a[k][j]<<" "<<_i<<" "<<_j<<" "<<i_j<<endl;
				
			}
			// cout<<_i<<" "<<_j<<" "<<i_j<<endl;
			if(n/2 - _i >=0 && n/2 - _j >=0  && n-_i-_j == i_j ){
				cout<<"YES"<<endl;
				return;
			}
		}
	}
	cout<<ret<<endl;
}

		
int main(){

	// freopen("../input.txt","r",stdin);
	// freopen("../output.txt","w",stdout);

	int t = 1;
	cin>>t;
	while(t--){
		solve();
	}

	
  
  return 0;
}

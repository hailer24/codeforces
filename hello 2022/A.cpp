#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
	int n,k;
	cin>>n>>k;
	if(k*2-1 > n)cout<<-1<<endl;
	else {
		for(int i = 0;i<n;i++){
			for(int j = 0;j<n;j++){
				if(i == j && i%2 == 0 && i/2 < k)cout<<"R";
				else cout<<".";
			}
			cout<<endl;
		}
	}
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

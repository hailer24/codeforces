#include <bits/stdc++.h>
using namespace std;

		
int main(){

	// freopen("../input.txt","r",stdin);
	// freopen("../output.txt","w",stdout);

	int t;
	cin>>t;
	while(t--){
		int n, _t;
		cin>>n;
		vector<int> vec(2);
		for(int i = 0;i<n;i++){
			cin>>_t;
			vec[_t-1]++;
		}

		if(vec[0]%2){
			cout<<"No"<<endl;
		}
		else if(vec[1]%2 == 0 || (vec[0] > 0))cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}

	
  
  return 0;
}
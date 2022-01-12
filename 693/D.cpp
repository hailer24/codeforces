#include <bits/stdc++.h>
using namespace std;

		
int main(){

	// freopen("../input.txt","r",stdin);
	// freopen("../output.txt","w",stdout);

	int t;
	cin>>t;
	while(t--){
		int n,_t;
		cin>>n;
		vector<int> vec(n);
		for(int i = 0;i<n;i++){
			cin>>vec[i];
		}
		sort(vec.rbegin(),vec.rend());

		long long a = 0,b = 0;

		for(int i = 0;i<n;i++){
			if(i%2){
				if(vec[i]%2)(b += vec[i]);
			}
			else if(vec[i]%2 == 0)(a += vec[i]);

		}

		if(a == b)cout<<"Tie\n";
		else if(a > b)cout<<"Alice\n";
		else cout<<"Bob\n";
	}

	
  
  return 0;
}
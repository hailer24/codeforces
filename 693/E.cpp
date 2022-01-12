#include <bits/stdc++.h>
using namespace std;

class Node {
	int w;
	int h;
	int idx;
	Node(int a,int b, int i){
		w = min(a,b);
		h = max(a,b);
		idx = i;
	}
};

		
int main(){

	// freopen("../input.txt","r",stdin);
	// freopen("../output.txt","w",stdout);

	int t;
	cin>>t;
	while(t--){
		int n,a,b;
		cin>>n;
		vector<vector<int>> mp;

		for(int i = 0;i<n;i++){
			cin>>a>>b;
			mp.push_back({min(a,b),max(a,b),i});
		}
		sort(mp.begin(),mp.end());
		// for(auto x:mp){
		// 	for(auto y:x)cout<<y<<" ";
		// 		cout<<endl;
		// }
		//cout<<endl;
		vector<int> ret(n,0);
		ret[mp[0][2]] = -1;
		for(int i = 1;i<n;i++){
			if(mp[0][1] < mp[i][1] && mp[0][0] < mp[i][0])ret[mp[i][2]] = mp[0][2]+1;
			else ret[mp[i][2]] = -1;
		}
		for(auto x:ret)cout<<x<<" ";
		cout<<"\n";
	}

	
  
  return 0;
}
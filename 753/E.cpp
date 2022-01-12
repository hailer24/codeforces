#include <bits/stdc++.h>
using namespace std;

int solve(){
	cout<<"--------------------"<<endl;
	int n,k;
		cin>>n>>k;
		vector<pair<int,vector<int>>> vec(n,{0,vector<int>()});
		for(int i = 0;i<n-1;i++){
			int _a,_b;
			cin>>_a>>_b;
			vec[_a-1].second.push_back(_b-1);
			vec[_b-1].second.push_back(_a-1);
			vec[_b-1].first++;
			vec[_a-1].first++;

		}
		vector<int> ret;
		int curr = n;

		// for(auto x:vec){
		// 	for(auto y:x.second)cout<<y<<" ";
		// 		cout<<endl;
		// }


		while(curr && ret.size() < n){
			//cout<<endl;
			vector<int> temp(n,0);
			for(int i = 0;i<n;i++){
				if(vec[i].first == 1){
					vec[i].first--;
					for(auto x:vec[i].second){
						temp[x]++;
						// if(vec[x].first == 0)curr--;
					}

					curr--;
				}
			}
			for(int i = 0;i<n;i++)vec[i].first -= temp[i];
			
			ret.push_back(curr);
		}
		//for(auto x:ret)cout<<x<<" ";
			if(ret.size() <= k)return 0;
			return ret[k-1];
}
		
int main(){

	freopen("../input.txt","r",stdin);
	freopen("../output.txt","w",stdout);

	int T;
	cin>>T;
	while(T--){
		cout<<solve()<<endl;
	}
	
  
  return 0;
}
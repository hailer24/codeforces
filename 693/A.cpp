#include <bits/stdc++.h>
using namespace std;

		
int main(){

	// freopen("../input.txt","r",stdin);
	// freopen("../output.txt","w",stdout);

	int t;
	cin>>t;
	while(t--){
		int w,h,n;
		cin>>w>>h>>n;
		int _w = 0,_h = 0;
		while(!(w%2)){
			_w++;
			w/=2;
		}
		while(!(h%2)){
			_h++;
			h/=2;
		}
		long long t = pow(2,_w+_h);

		string ret = t >= n ? "Yes":"No";
		cout<<ret<<endl;

	}

	
  
  return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool solve(){
	vector<int> in(3);
	for(auto& x:in)cin>>x;
	bool _a = true, _b = true, _c = true;
	int a = 2*in[1] - in[2];
	if(a <= 0)_a = false;
	int b = in[2]-in[0];
	if(b%2)_b = false;
	b/=2;
	b+=in[0];
	int c = 2*in[1]-in[0];
	if(c <=0) _c = false;
	// cout<<in[0]<<" "<<in[1]<<" "<<in[2]<<endl;
	// cout<<a<<" "<<b<<" "<<c<<endl;
	// cout<<_a<<" "<<_b<<" "<<_c<<endl;
	
	// bool _a = true,_b = true,_c = true;
	if((in[0] > a || a%in[0] != 0) && a > 0)_a = false;
	if((in[1] > b || b%in[1] != 0) && b > 0)_b = false;
	if((in[2] > c || c%in[2] != 0) && c > 0)_c = false;
	return _a||_b||_c;
}

		
int main(){

	// freopen("../input.txt","r",stdin);
	// freopen("../output.txt","w",stdout);

	int t;
	cin>>t;
	while(t--){
		if(solve()){
			cout<<"YES"<<endl;
		}
		else cout<<"NO"<<endl;
	}

	
  
  return 0;
}
/*
bool _a = true, _b = true, _c = true;
	int a = 2*in[1] - in[2];
	if(a < 0)_a = false;
	int b = in[2]-in[0];
	if(b%2)_b = false;
	b/=2;
	int c = 2*in[1]-in[0];
	if(in[0] > a || (in[]))


YES
YES
YES
YES
NO
YES
NO
YES
YES
NO
YES


*/
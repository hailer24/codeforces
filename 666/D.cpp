#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
	int n;
	cin >> n;
    vector<int> v(n);
    int sum = 0;
    for (int& x : v) {
        cin >> x;
        sum += x;
    }
 
    int mx = *max_element(v.begin(),v.end());
    string ret = "HL";
    if (mx > sum/2 || sum%2)
        ret = "T";
    cout<<ret<<endl;
}

		
int main(){

	// freopen("../input.txt","r",stdin);
	// freopen("../output.txt","w",stdout);

	int t;
	cin>>t;
	while(t--){
		solve();
	}

	
  
  return 0;
}

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
	int n;
	cin>>n;
	int minL = INT_MAX, costL = INT_MAX;
    int maxR = 0, costR = INT_MAX;
    int maxLen = 0, costLen = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int l, r, c;
        cin >> l >> r >> c;
 
        if (l < minL)
            minL = l, costL = INT_MAX;
        if (l == minL)
            costL = min(costL, c);
 
        if (maxR < r)
            maxR = r, costR = INT_MAX;
        if (maxR == r)
            costR = min(costR, c);
 
        if (maxLen < r - l + 1)
            maxLen = r - l + 1, costLen = INT_MAX;
        if (maxLen == r - l + 1)
            costLen = min(costLen, c);
 
        int ret = costL + costR;
        if (maxLen == maxR - minL + 1)
            ret = min(ret, costLen);
        cout << ret << endl;
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

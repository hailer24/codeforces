#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef vector<int> vi;
typedef pair<int,int> pi;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i <= b; i++)
int in(){
	int temp;
	cin>>temp;
	return temp;
}

void solve(){
	int n;cin>>n;int arr[n+1];
	    for(int i=1;i<=n;i++)
	    {
	        cin>>arr[i];
	    }
	    int x=0;
	    for(int i=n;i>=1;i--)
	    {
	        if(arr[i]!=0)
	       {
	           if(arr[i]>x)
	           x=arr[i];
	           arr[i]=1;
	           x--;
	           continue;
	       }
	       else
	       {
	           if(x>0)
	           {
	               arr[i]=1;
	               x--;
	           }
	       }
	    }
	    for(int i=1;i<=n;i++)
	    {
	        cout<<arr[i]<<" ";
	    }
	    cout<<endl;
}

		
signed main(){
	#ifndef ONLINE_JUDGE
	freopen("../input.txt","r",stdin);
	freopen("../output.txt","w",stdout);
	#endif // ONLINE_JUDGE

	int t = 1;
	cin>>t;
	while(t--){
		solve();
	}

	
  
  return 0;
}

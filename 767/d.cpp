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
	    int n = in();
    vector<string> arr(n);
    
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
 
    bool chk = false;
 
    for(int i=0;i<n;i++){
        int s = arr[i].size();
        if(arr[i][0]==arr[i][s-1]){
            chk=true;
            break;
        }
    }
 
    if(chk){
        cout<<"YES\n";
        return;
    }
    else{
        map<string,int>mp;
 
        for(int i=0;i<n;i++)
        {
            string rev = arr[i];
            reverse(rev.begin(),rev.end());
            if(mp.find(rev)!=mp.end()){
                chk=true;
                break;
            }
            if(arr[i].size()==2)
            {
                for(char c='a';c<='z';c++){
                    string cp=rev+c;
                    if(mp.find(cp)!=mp.end()){
                        chk=true;
                        break;
                    }
                }
            }
            else
            {
                string cp=rev.substr(0,2);
                if(mp.find(cp)!=mp.end()){
                    chk=true;
                    break;
                }
            }
            mp[arr[i]]++;
            if(chk)break;
        }   
    }
 
    if(chk)
    {
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
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

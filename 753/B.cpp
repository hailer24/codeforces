#include <bits/stdc++.h>
using namespace std;

int chk(string &s, string &t){
    int n = s.size()-1, ret = 0, c = 1;
    while(n>=0 && c >=0){
        if(t[c] == s[n]){
            c--;
            n--;
        }
        // cout<<ret<<" ";
        else
        {
            ret++;
            n--;
        }
    }
    return ret;
}

		
int main(){

	// freopen("../input.txt","r",stdin);
	// freopen("../output.txt","w",stdout);
	int t;
	cin>>t;
    string strs[] = {"00","25","50","75"};
	while(t--){
		string s;
		cin>>s;
        int ret = INT_MAX;
        for(int i = 0;i<4;i++){
            ret = min(ret,chk(s,strs[i]));
            //cout<<ret<<" ";
        }
        cout<< ret << endl;
    }

	
  
  return 0;
}
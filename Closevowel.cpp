#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int M = 1e9 + 7;
int main() {
	// your code goes here

	    set<char>s;
	    s.insert('c');
	    s.insert('g');
	    s.insert('l');
	    s.insert('r');
	  ll t;
	  cin>>t;
      while(t--){
	    ll n;
	    ll ans=1;
	    cin>>n;
	    string str;
	    cin>>str;
	    
	    for(char c:str){
	        if(s.find(c)!=s.end()){
	            ans = (ans*2)%M;
	        }
	    }
	     cout<<ans<<endl;
	    
	}
	return 0;
}

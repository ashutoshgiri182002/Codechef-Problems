#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string arr[n];
	    int cnt = 0;
	    int cnt1 = 0;
	    for(int i = 0;i<n;i++){
	        cin>>arr[i];
	    }
	    
	    for(int i = 0;i<n;i++){
	        if(arr[i][0]=='S'){
	            cnt++;
	        }
	        else cnt1++;
	    }
	    
	    cout<<cnt<<" "<<cnt1<<endl;
	}
	return 0;
}

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    int cnt = 0;
	    for(int i = 0;i<n;i++){
	        cin>>arr[i];
	    }
	    
	    for(int i = 0;i<n-1;i++){
	        if(arr[i]==arr[i+1]){
	            cnt++;
	        }
	    }
	    cout<<(n-cnt)<<endl;
	}
	return 0;
}

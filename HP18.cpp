#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    
	    
	    int n,a,b;
	    cin>>n>>a>>b;
	    int arr[n];
	    for(int i = 0;i<n;i++){
	        cin>>arr[i];
	    }
	    
	    int cnt = 0;
	    int cnt2 = 0;
	    
	    for(int i =0;i<n;i++){
	        if(arr[i]%a==0){
	            cnt++;
	        }
	        
	        else if(arr[i]%b==0){
	            cnt2++;
	        }
	    }
	    
	    if(cnt>cnt2){
	            cout<<"BOB"<<endl;
	        }
	        
	        else cout<<"ALICE"<<endl;
	}
	return 0;
}

#include <bits/stdc++.h>
#define ll long long 
#define f() for(int i = 0;i<n;i++)
#define v vector<int>v;
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        float x = (float)n/2;
        
        int i = ceil(x);
        int j = ceil(x)+1;
        //cout<<i<<" "<<j<<endl;
        while(i>0 or j<=n){
            if(i>0){
              cout<<i<<" ";
            }
            if(j<=n){
              cout<<j<<" ";
            }
            
            i--;j++;
        }
    
        cout<<endl;
    }
}

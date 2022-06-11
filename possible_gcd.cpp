#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main() {
    ll t;
    cin>>t;
    while(t--){
       ll a,b;
       cin>>a>>b;
       ll diff = abs(a-b);
       vector<int>v;
       int factor = 0;
        for(ll i = 1;i<=sqrt(diff);i++){
           if(diff%i==0){
              v.push_back(i);
              factor++;
              if(diff/i!=i){
                  v.push_back(diff/i);
                  factor++;
              }
           }   
       }
       cout<<factor<<endl;
    }
}

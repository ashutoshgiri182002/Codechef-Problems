#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){

  ll t;
  cin>>t;
  while(t--){
      ll n;
      cin>>n;
     
     ll N =n;
     ll M =n;
      ll cnt =0;
      while(n%2==0){
          n /=2;
          cnt++;
      }

      ll x = sqrt(N);
      
       if(M==1) cout<<0<<endl;
       
    else if(cnt==0) cout<<1<<endl;

     else if(cnt%2==1) cout<<-1<<endl;

     else if(x*x==N) cout<<1<<endl;

     else cout<<2<<endl;

  }

    return 0;
}

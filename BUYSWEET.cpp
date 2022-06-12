#include <bits/stdc++.h>
#define ll long long
#define f() for(int i=0;i<n;i++)
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,r;
        int cnt =0;
        cin>>n>>r;
        vector<int>arr1,arr2;
        vector<pair<int,pair<int,int>>>v;
        
        f(){
            int x;
            cin>>x;
            arr1.push_back(x);
        }

        f(){
            int x;
            cin>>x;
            arr2.push_back(x);
        }

        f(){
            v.push_back(make_pair(arr1[i]-arr2[i],make_pair(arr1[i],arr2[i])));
        }
      
        sort(v.begin(),v.end());
      
        f(){
            while(r>=(v[i].second.first)){
                int temp = (r/(v[i].second.first));
                cnt +=temp;
                r -=temp*(v[i].second.first);
                r +=temp*(v[i].second.second);
            }
        }
        
        cout<<cnt<<endl;
    }
}

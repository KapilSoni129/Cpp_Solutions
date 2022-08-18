#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t,n,i,j,m;
    cin>>t;
    while(t--){ 
        cin>>n>>m;
        unordered_map<ll, vector<ll>>mp;
        map<ll, ll>p;
        for(i=0; i<n; i++){
            vector<ll>v1(m), v2(m);
            for(j=0; j<m; j++){
                cin>>v1[j];
                v2[j] = v1[j];
            }
            sort(v2.begin(), v2.end());
            for(j=0; j<m; j++){
                if(v2[j]!=v1[j]){
                    p[j]++;
                }
            }
            mp[i]=v2;
        }
        if(p.size()==0){
            cout<<"1 1";
        }else if(p.size()==2){
            auto itb = p.begin();
            auto ite = p.rbegin();
            
            ll x = itb->first;
            ll v1 = itb->second;
            ll y = ite->first;
            ll v2 = ite->second;
            if(v1==n && v2==n){
                cout<<x+1<<" "<<y+1;
            }else{
                for(auto it : mp){
                    vector<ll>temp = it.second;
                    if(temp[x] == temp[y]){
                        v1++;
                        v2++;
                    }
                }
                if(v1==n && v2==n){
                    cout<<x+1<<" "<<y+1;
                }else{
                    cout<<"-1";
                }
            }
        }else{
            cout<<"-1";
        }
        cout<<"\n";
    }
}
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define ll long long int
#define lf long double
#define ss string
#define vecp vector<pair<int,int>>
#define vecs vector<pair<string,int>>
#define vec vector<int>
#define fl(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define sortv(v) sort(v.begin(),v.end())
/*    SAAB CHUNGUS SI     */

/*    Code kya Dekh raha hai Bosdike    */

int main(){
    int m;cin>>m;
    while(m--){
        ll n;cin>>n;
        ss s;cin>>s;
        ll m=0;vector<ll>v,w,ans;
        bool ok=true;
        ll a=0,b=0;
        fl(i,n){
            if(s[i]=='1'){b++;v.pb(i);}
        }
        for(int i=n-1;i>=0;i--){
            if(s[i]=='0'){a++;w.pb(i);}
        }
        fl(i,v.size()){
            if(v[i]<n-b){
                m++;
                ans.pb(v[i]);
            }
        }
        fl(i,w.size()){
            if(w[i]>a-1){
                m++;
                ans.pb(w[i]);
            }
        }
        if(ans.size()==0) cout<<"0"<<endl;
        else{
            sortv(ans);
            cout<<"1"<<endl;
            cout<<ans.size()<<" ";
            fl(i,ans.size()) cout<<ans[i]+1<<" ";
            cout << endl;
        }
    }   
    return 0;
}
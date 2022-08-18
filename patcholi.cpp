#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define ll long long int
#define ld long long double
#define ss string
#define vecp vector<pair<int,int>>
#define vecs vector<pair<string,int>>
#define vec vector<int>
#define fl(i,m) for(int i=0;i<m;i++)
#define pb push_back

/*    SAAB CHUNGUS SI     */

/*    Code kya Dekh raha hai Bosdike    */
/*    Plagrism Laag Jayega    */

int main(){
    int n;cin>>n;
    while(n--){
        int m;cin>>m;vec v,v1,v2;
        fl(i,m) {
            cin>>v[i];
            if(v[i]%2==0) v2.push_back(v[i]);
            else v1.push_back(v[i]);
        }
        if(v1.size()!=0)cout<<v2.size()<<endl;
        else{
            ll cnt=INT_MAX;
            for(int i=0;i<n;i++){
                if(v2[i]%2==0){
                    ll curr=0;
                    while(v2[i]%2!=1){
                        v2[i]/=2;
                        curr++;
                    }
                    cnt=min(cnt,curr);
                }
            }
            ll ans=cnt+v2.size()-1;
            cout<<ans<<'\n';
            // while(true){
            //     v2[0]=v2[0]/2;
            //     x++;
            //     if(v2[0]%2==0) break;
            // }
            // cout<<x+v2.size()-1;
        }
    }
return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vll vector<long long> 
#define ll long long int
#define ld long long double
#define ss string
#define vecp vector<pair<int,int>>
#define vecs vector<pair<string,int>>
#define pb push_back
#define sortv(v) sort(v.begin(),v.end())
#define sort(arr,m) sort(arr,arr+m)
#define fl(i,n) for(int i=0;i<n;i++)

/*    SAAB CHUNGUS SI     */

/*    Code kya Dekh raha hai Bosdike    */
/*    Plagrism Laag Jayega    */

int main(){
    int m;cin>>m;
    while(m--){
        ll n; cin >>n;
        vll v(n);
        fl(i,n) cin>>v[i];
        vll v2(n);
        bool lmao = true;
        for(int i=0;i<n-1;++i) {
            ll bruh=v[i]-v2[i];
            if(bruh<=0) {
                if(bruh < 0)
                lmao = false;
                break;
            }
            v2[i]+=bruh;
            v2[i+1]-=bruh;
        }
        fl(i,n) {
            if(v[i]!=v2[i]) lmao = false;
        }
        if(!lmao) cout <<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define ll long long int
#define ld long long double
#define ss string
#define vecp vector<pair<int,int>>
#define vecs vector<pair<string,int>>
#define vec vector<int>
#define fl(i,m) for(ll i=0;i<m;i++)
#define pb push_back
#define sortv(v) sort(v.begin(),v.end())
#define sorta(arr,m) sort(arr, arr+m, greater<int>());
#define sortar(arr,m) sort(arr, arr+m);

/*    SAAB CHUNGUS SI     */

/*    Code kya Dekh raha hai Bosdike    */
/*    Plagrism Laag Jayega    */

int main(){
    ll m1,m2;cin>>m1>>m2;
    ll arr[m1],v[m1+1];
    fl(i,m1) cin>>arr[i];
    sort(arr,arr+m1, greater<ll>());
    // vector <ll> v;
    v[0]=0;
    fl(i,m1) v[i+1]=v[i]+arr[i];
    while(m2--){
        ll x,y;cin>>x>>y;
        cout<<v[x]-v[x-y]<<endl;
    }
return 0;
}
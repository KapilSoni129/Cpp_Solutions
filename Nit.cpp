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
#define sortv(v) sort(v.begin(),v.end())
#define sorta(arr,m) sort(arr,arr+m)

/*    SAAB CHUNGUS SI     */

/*    Code kya Dekh raha hai Bosdike    */
/*    Plagrism Laag Jayega    */

int main(){
    ll n;cin>>n;
    while(n--){
        ll m1,m2;cin>>m1>>m2;
        ll x=0;
        int arr[m1];
        fl(i,m1){
            cin>>arr[i];
            x=max(x,arr[i] | m2);
        }
        cout<<x<<endl;
    }
return 0;
}
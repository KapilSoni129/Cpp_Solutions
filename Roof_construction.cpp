#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define ll long long int
#define ld long long double
#define ss string
#define vecp vector<pair<int,int>>
#define vecs vector<pair<string,int>>
#define vec vector<int>
#define fl(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define sortv(v) sort(v.begin(),v.end())
#define sort(arr,n) sort(arr,arr+n)

/*    SAAB CHUNGUS SI     */

/*    Code kya Dekh raha hai Bosdike    */
/*    Plagrism Laag Jayega    */

int main(){
    int m;cin>>m;
    while(m--){
        int n,d=0;cin>>n;int arr[n];
        fl(i,n) cin>>arr[i];
        for(int i=0;i<n-1;i++){
            d+=arr[i+1]-arr[i]-1;
        }
        if(d<=2) cout<<"YES\n";
        else cout<<"NO\n";
    }
return 0;
}
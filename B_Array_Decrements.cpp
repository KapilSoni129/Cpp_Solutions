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
    int n;cin>>n;
    while(n--){
        int m,z=0,a=0;cin>>m;
        int arr1[m],arr2[m];
        vec v;
        fl(i,m) cin>>arr1[i];
        fl(i,m) cin>>arr2[i];
        fl(i,m){
            if((arr1[i]-arr2[i])>z) z=arr1[i]-arr2[i];
        }
        fl(i,m){
            // cout<<a<<"z"<<z;
            if(arr1[i]-arr2[i]<0) a=1;
            if(arr2[i]==0 && (arr1[i]-arr2[i]) > z) a=1;
            if(arr2[i]!=0 && arr1[i]-arr2[i] != z) a=1;
        }
        // cout<<a;
        if(a==1) cout<<"NO\n";
        else cout<<"YES\n";
        // if(z==1) cout<<"NO\n";
        // else if(a==0) cout<<"YES\n";
        // else if(m==1){
        //     if(z==0) cout<<"YES\n";
        // }
        // else{
        //     int x=v[0],y=0;
        //     fl(i,v.size()){
        //         if(x!=v[i]) {y=1;break;}
        //     }
        //     if(y==1) cout<<"NO\n";
        //     else cout<<"YES\n";
        // }
        // // else cout<<"YES\n";
    }
return 0;
}
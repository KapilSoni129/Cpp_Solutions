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
#define sort(arr,m) sort(arr,arr+m)

/*    SAAB CHUNGUS SI     */

/*    Code kya Dekh raha hai Bosdike    */
/*    Plagrism Laag Jayega    */

int main(){
    int n;cin>>n;
    while(n--){
        int m,t=0;cin>>m;int arr1[m],arr2[m],arr3[m];
        fl(i,m) cin>>arr1[i];
        fl(i,m) cin>>arr2[i];
        fl(i,m){
            if(arr1[i]>t) t=arr1[i];
            arr3[i]=arr2[i]-t;
            t=arr2[i];
        }
        fl(i,m) cout<<arr3[i]<<" ";
        cout<<endl;
    }
return 0;
}
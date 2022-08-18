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
        int m1;cin>>m1;int arr1[m1];
        fl(i,m1) cin>>arr1[i];
        int m2;cin>>m2;int arr2[m2];
        fl(i,m2) cin>>arr2[i];
        int x=0;
        fl(i,m2){
            x+=arr2[i],x%=m1;
        }
        cout<<arr1[x]<<endl;
    }
return 0;
}
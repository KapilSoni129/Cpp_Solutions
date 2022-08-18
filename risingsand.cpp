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
      int m,x=0,z;
      cin>>m>>z;int arr[m];
      fl(i,m) cin>>arr[i];
      for(int i=1;i<m-1;i++){
        if(arr[i]>arr[i+1]+arr[i-1]) x++;
      }
      if(z==1){
        if(m%2==1) cout<<m/2<<endl;
        else cout<<(m-2)/2<<endl;
      }
      else cout<<x<<endl;
    }
return 0;
}
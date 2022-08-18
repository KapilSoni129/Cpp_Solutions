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
        int m,x=0;cin>>m;int arr[m];
        fl(i,m) cin>>arr[i];
        fl(i,m){
            if(arr[i]!=0){
                while(i+1<(m && arr[i+1])) i++;
                x++;
            }
        }
        if(x<2) cout<<x<<"\n";
        else cout<<"2\n";
    }
return 0;
}
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
        int m;cin>>m;
        int arr1[m],arr2[m];
        fl(i,m) cin>>arr1[i];
        fl(i,m) cin>>arr2[i];
        vecp v1,v2;
        fl(i,m) v1.pb({arr1[i],arr2[i]});
        sortv(v1);
        fl(i,m){
            if(arr1[i]!=v1[i].first || arr2[i]!=v1[i].second){
                for(int j=i+1;j<m;j++){
                    if(arr1[j]==v1[i].first&&arr2[j]==v1[i].second){
                        swap(arr1[i],arr1[j]);
                        swap(arr2[i],arr2[j]);
                        v2.push_back({i+1,j+1});
                    }
                }
            }
        }
        bool lmao=true;
        for(int i=1;i<m;i++){
            if(v1[i].first<v1[i-1].first || v1[i].second<v1[i-1].second) lmao=false;
        }
        if(lmao){
            cout<<v2.size()<<endl;
            for(int i=0;i<v2.size();i++) cout<<v2[i].second<<" "<<v2[i].first<<endl;
        }
        else cout<<"-1"<<endl;
    }
return 0;
}
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
        int m,x=0,y=0;cin>>m;
        int arr[m];vec v;
        map<int,int> mp;
        fl(i,m){
            cin>>arr[i];
            if(arr[i]!=0) y=1;
            else x++;
            mp[arr[i]]++;
            if(mp[arr[i]]<4) v.pb(arr[i]);
        } 
        sortv(v);
        //cout<<x;
        if(y==0){cout<<"YES\n";continue;}
        else if(x==m-2 && v[0]==-1*v[v.size()-1]){
          cout<<"YES\n";continue;}
        if(v.size()>10) cout<<"NO\n";
        else{
            int lmao=0;
            for(int i=0;i<v.size();i++){
                for(int j=i+1;j<v.size();j++){
                    for(int k=j+1;k<v.size();k++){
                        if(mp.count(v[i]+v[j]+v[k])==0){
                          lmao=1;
                        }         
                    }
                }
            }
            if(lmao==0) cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
return 0;
}
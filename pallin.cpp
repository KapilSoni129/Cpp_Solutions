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
 
int main(){
    ll n;cin>>n;
    while(n--){
        ll m,x=0;cin>>m;
        ss s;cin>>s;
        for(int i=0;i<m-1;i++){
            if(s[i+1]!=s[i]){
                x+=i+1;
            }
        }
        cout<<x+m<<endl;
    }
return 0;
}
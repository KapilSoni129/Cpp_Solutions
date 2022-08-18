#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define jaldisejaldi { ios :: sync_with_stdio(false); cin.tie(0); cout.tie(0);}
#define ll long long int
#define ld long long double
#define ss string
#define vecp vector<pair<int,int>>
#define vecs vector<pair<string,int>>
#define vec vector<int>
#define fl(i,m) for(ll i=0;i<m;i++)
#define pb push_back
#define sortv(v) sort(v.begin(),v.end())
#define sorta(arr,m) sort(arr,arr+m)

/*    SAAB CHUNGUS SI     */

/*    Code kya Dekh raha hai Bosdike    */
/*    Plagrism Laag Jayega    */

int main(){
    jaldisejaldi
    int n;cin>>n;
    while(n--){
        ll m1,m2;cin>>m1>>m2;
        ll i,v[m1][m2];
        fl(i,m1){
            fl(j,m2){
                if(i%4==0 || i%4==3){
                  if(j%4==0 || j%4==3) v[i][j]=1;
                  else v[i][j]=0;
                }
                else if(i%4==1 || i%4==2){
                  if(j%4==1 || j%4==2) v[i][j]=1;
                  else v[i][j]=0;
                }
            }
        }
        for(int i=0;i<m1;i++){
          for(int j=0;j<m2;j++){
            cout<<v[i][j]<<" ";
          }
          cout<<"\n";
        }
    }
return 0;
}
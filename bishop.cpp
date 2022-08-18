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

// int count(string s){
//     int x;
//     for(int i=0;i<8;i++){
//         if(s[i]=='#') x++;
//     }
//     return x;
// }

int main(){
    int n;cin>>n;
    while(n--){
        vector <string> v;
        for(int i=0;i<8;i++){
            string s;cin>>s;
            v.pb(s);
        }
        for(int i=1;i<7;i++){
            for(int j=1;j<7;j++){
                if(v[i-1][j-1]=='#' && v[i+1][j+1]=='#' && v[i-1][j+1]=='#' && v[i+1][j-1]=='#' && v[i+1][j+1]=='#' && v[i][j]=='#'){
                    cout<<i+1<<" "<<j+1<<"\n";
                    // cout<<endl;
                }
            }
           
        }
    }
return 0;
}
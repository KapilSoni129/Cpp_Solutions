#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define ll long long int
#define ld long long double
#define ss string
#define vecp vector<pair<int,int>>
#define vecs vector<pair<string,int>>
#define vec vector<int>
#define fl(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define sortv(v) sort(v.begin(),v.end())

/*    SAAB CHUNGUS SI     */

/*    Code kya Dekh raha hai Bosdike    */
/*    Plagrism Laag Jayega    */

int main(){
    int n;cin>>n;
    while(n--){
        int m,x=-1,y=-1;cin>>m;vector <int> v(m);
        for(int i=0;i<m;i++) cin>>v[i];
        vector<int> w=v;
        sort(v.begin(),v.end());
        for(int i=0;i<m;i++){
            if(v[i]!=w[i] &&) s &= w[i];
        }
        cout<<s<<endl;
    }
return 0;
}
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
        int m1,m2,o1,o2;cin>>m1>>m2>>o1>>o2;
        int m=max(m1,m2),o=max(o1,o2);
        if(m>o) cout<<"Q\n";
        else if (m==o)cout<<"TIE\n";
        else cout<<"P\n";
    }
return 0;
}
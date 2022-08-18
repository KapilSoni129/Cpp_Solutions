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
#define sortv(v2) sort(v2.begin(),v2.end())
// #define sort(arr,m) sort(arr,arr+m)
 
/*    SAAB CHUNGUS SI     */
 
/*    Code kya Dekh raha hai Bosdike    */
/*    Plagrism Laag Jayega    */
 
int main(){
    int n,m,a,b;cin>>n>>m>>a>>b;
    if (m*a<=b) cout<<n*a;
    else cout << (n/m)*b+min((n%m)*a,b);
}
 
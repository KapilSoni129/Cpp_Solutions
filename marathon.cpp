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
        int m,x=0;cin>>m;
        int arr[m];set<int> a;
        // vec v[m];
        fl(i,m){
            int x;cin>>x;
            a.insert(x);
        }
        if((m-a.size())%2==0) cout<<a.size()<<endl;
        else cout << a.size()-1 << endl;
    }
return 0;
}
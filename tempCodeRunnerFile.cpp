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
#define sort(arr,n) sort(arr,arr+n)
#define loop int i = n - 2; i >= 0; i--
/*    SAAB CHUNGUS SI     */

/*    Code kya Dekh raha hai Bosdike    */
/*    Plagrism Laag Jayega    */



void solve()
{
 ll n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        ll c = a[n - 1];
        ll l = 1;
        ll ch = 0;
        for (loop){
            if (a[i] < c){
                c = a[i];
            }
            else{
                if (c== 0) {
                    l = 0;
                    break;
                }
                while (a[i] >= c){
                    a[i] /= 2;
                    ch++;
                }
                c = a[i];
            }
        }
        if (l) cout << ch << endl;
        else cout << -1 << endl;
}


int main() {
int t;
cin>>t;
while(t--)
  solve();

 return 0;
}
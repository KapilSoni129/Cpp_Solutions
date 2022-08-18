#include <bits/stdc++.h>
    using namespace std;

    #define tezi { ios :: sync_with_stdio(false); cin.tie(0); cout.tie(0); }
    #define pb push_back
    #define ll long long 
    #define vi vector<int>
    #define vll vector<long long>
    #define f(i,a,b) for(ll i=a;i<b;i++)
   
    #define endl "\n"
    #define ALL(v) v.begin(),v.end()
    #define nl cout<<"\n";
  
 
     int main() 
    {
       tezi
     
        ll ntc=1;
       cin>>ntc;
     
        f(tt,1,ntc+1)    {
           ll n; cin >> n;
           vll v(n);
           ll nzero = false;
           map<ll,ll> m;
           vll nv;
           ll z = 0;
           
           f(i,0,n) {
               cin >> v[i];
               if(v[i] != 0) nzero = true;
               else ++z;
               m[v[i]]++;
               if(m[v[i]] <= 3) nv.pb(v[i]);
            
           }
           if(nzero == false) {
               cout <<"YES" <<endl;
               continue;
           }
           sort(ALL(nv));
           if(z == n-2 && nv[0] == -1*nv.back()) {
               cout<<"YES"<<endl;
               continue;
           }
           
           if(nv.size() > 10) {
               cout<<"NO"<<endl;
               
           } else {
               int sz = nv.size();
               bool can = true;
               for(int i = 0; i < sz; ++i) {
                   for(int j = i + 1; j < sz; ++j) {
                       for(int k = j + 1; k < sz; ++k) {
                           if(m.count(nv[i] + nv[j] + nv[k]) == 0) {
                               can = false;
                           }
                       }
                   }
               }
               if(can) cout<<"YES";
               else cout<<"NO";
               nl
           }
           
         
        }
     
        return 0;
    }
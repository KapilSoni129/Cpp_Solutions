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
    ll n,x,m=0;cin>>n>>x;
    if(x==1 && n!=1) cout<<-1;
    else{
        while(true){
            vec s;ll y=x;
            while(y){
                s.push_back(y%10);
                y/=10;
            }
            sortv(s);
            int z=s.size();
            if(z>=n) {cout<<m;break;}
            else{
                int b=0,a=0;
                for(int i=0;i<z;i++){
                    y*=s[i];
                    vec s2;
                    while(y){
                        s2.push_back(y%10);
                        y/=10;
                    }
                    if(y*s2[s2.size()-1]>a) b=i;
                }
                x*=s[b];
                m++;
            }
        }
    } 
return 0;
}
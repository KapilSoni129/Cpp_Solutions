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
#define sort(arr,m) sort(arr,arr+m)

/*    SAAB CHUNGUS SI     */

/*    Code kya Dekh raha hai Bosdike    */
/*    Plagrism Laag Jayega    */

int main(){
    // int n;cin>>n;
    // while(n--){

    // }
    ss s,s1;cin>>s;
    int n1=0,n2=0,n3=0,n4=0,n5=1;
    for(int i=0;i<s.size();i++){
        if(n5==1 && s[i]=='h'){
            n5=0;
            n1=1;
            s1=s1+s[i];
        }
        else if(n1==1 && s[i]=='e'){
            n1=0;
            n2=1;
            s1=s1+s[i];
        }
        else if(n2==1 && s[i]=='l'){
            n2=0;
            n3=1;
            s1=s1+s[i];
        }
        else if(n3==1 && s[i]=='l'){
            n3=0;
            n4=1;
            s1=s1+s[i];
        }
        else if(n4==1 && s[i]=='o'){
            n4=0;
            n5=1;
            s1=s1+s[i];
            break;
        }
    }
    //cout<<s1;
    if(s1=="hello")cout<<"YES\n";
    else cout<<"NO\n";

return 0;
}
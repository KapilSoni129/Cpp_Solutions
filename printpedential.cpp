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
            int m;cin>>m;
            if(m%3==0) cout<<(m/3)<<" "<<(m/3)+1<<" "<<(m/3)-1<<endl;
            else if(m%3==1) cout<<(m-1)/3<<" "<<(m+5)/3<<" "<<(m-4)/3<<endl;
            else cout<<(m+1)/3<<" "<<(m+4)/3<<" "<<(m-5)/3<<endl;
        }
    return 0;
    }
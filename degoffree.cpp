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

bool isPalindrome(string str){
    int l = 0;
    int h = str.size() - 1;
    while (h > l)
    {
        if (str[l++] != str[h--]) return false;
    }
    return true;
}

int main(){
    int n;cin>>n;
    while(n--){
        int m;cin>>m;int x=m%2;
        ss str;cin>>str;
        for(int i=((m+1)/2);i<m;i++){
            if(str[i]!=str[m/2]) break;
            x+=2;
        }
        cout << x << endl;
    }
return 0;
}
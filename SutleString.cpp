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

/*    SAAB CHUNGUS SI     */

/*    Code kya Dekh raha hai Bosdike    */
/*    Plagrism Laag Jayega    */

bool uniqueCharacters(string str){
    for (int i = 0; i < str.length() - 1; i++) {
        for (int j = i + 1; j < str.length(); j++) {
            if (str[i] == str[j]) {
                return false;
            }
        }
    }
    return true;
}

bool AllEqual(string s){
    for(int i=0;i<s.length();i++){
        if(s[i]!=s[0]) return false;
    }
    return true;
}

bool Alternate(string str){
    vector <char> unique;
    for (int i=0;i<str.length();i++){
        int x=0;
        for(int j=0;j<unique.size();j++){
            if(str[i]==unique[j]) x=1;
        }
        if(x==0) unique.push_back(str[i]);
    }
    for(int i=0;i<unique.size();i++){
        for(int j=i;j<str.size();j++){
            if(unique[i]!=str[j]) return false;
            j+=unique.size()-1;
        }
    }
    return true;
}

int main(){
    int n;cin>>n;
    while(n--){
        ss s;cin>>s;
        int f=s.size();
        if(uniqueCharacters(s)) cout<<"YES\n";
        else if(Alternate(s)) cout<<"YES\n";
        else if(AllEqual(s)) cout<<"YES\n";
        else cout<<"NO\n";
    }
return 0;
}
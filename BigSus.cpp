#include <bits/stdc++.h>
#define ll long long int
using namespace std;
string removeOddFrequencyCharacters(string s)
{
    unordered_map<char, int> m;
    for (int i = 0; i < s.length(); i++) {
        m[s[i]]++;
    }
    string new_string = "";
    for (int i = 0; i < s.length(); i++) {
        if (m[s[i]] <= 1)
            continue;
        else{
            new_string += s[i];
            m[s[i]]=m[s[i]]-2;
        }
    }
    if(new_string=="") return "0";
    return new_string;
}
string removeCharacters(string s)
{
    unordered_map<char, int> m;
    for (int i = 0; i < s.length(); i++) {
        m[s[i]]++;
    }
    unordered_map<char, int> o;
    for (int i = 0; i < s.length(); i++) {
        o[s[i]]++;
    }
    string new_string = "";
    for (int i = 0; i < s.length(); i++) {
        if (m[s[i]]<=1 && o[s[i]]%2==1)
            continue;
        else{
            new_string += s[i];
            m[s[i]]=m[s[i]]-1;
        }
    }
    return new_string;
}
int main(){
    int n;cin>>n;
    while(n--){
        string s; cin>>s;
        if(removeOddFrequencyCharacters(s)=="0"){
            cout << s.size() << endl;
        }
        else{
            string s1 = removeOddFrequencyCharacters(s);
            int m = s.size() - 2 * s1.size();
            // cout << m << endl;
            string s2 = removeCharacters(s) ;
            int u = 0;
            // cout << s2 << endl;
            for(int i=0;i<s2.size()-1;i++){
                if(s2[i]==s2[i+1]){
                  u++;i++;
                }            
            }
            // cout << u << endl;
            // m = m + s2.size() - 2*u;
            // cout << m << endl;
            string s3 = s2;
            while(u*2!=s3.size()){
                unordered_map<char, int> x;
                for(int i=0;i < s3.length();i++){
                    for(int j=i;j< s3.length();j++){
                        if(s3[i]==s3[j]) x[s3[i]]=j-i;
                    }
                }
                ll y = 10000000000; char c;
                for(int i=0;i<s3.size();i++){
                    if(x[s3[i]]<y) y=x[s3[i]];c=s3[i];
                }
                s3="";int z=0;
                for(int i=0;i<s2.size();i++){
                    if(s2[i]!=c && z!=2){
                        s3=s3+s2[i]; z++;
                        }
                }
                u=0;
                for(int i=0;i<s3.size()-1;i++){
                    if(s3[i]==s3[i+1]){
                        u++;i++;
                    }            
                }
            }
            // cout << s2 << endl;
            // cout << s3 << endl;
            if(s2==s3) cout << s.size() - u*2 << endl;
            else cout << s.size() - s2.size() + s3.size() << endl;
        }
    }
}

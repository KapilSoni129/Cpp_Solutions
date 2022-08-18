#include <bits/stdc++.h>
using namespace std;
#define str string
int main(){
    int q;
    cin >> q;
    for(int i=0;i<q;i++){
        int a,b;
        str c;
        cin >> a >> b;
        cin >> c;
        int d = 0;
        for(int j=0,k=a-1;i<j;j++,k--){
            if(c.at(j)!=c.at(k)){
                d++;
            }
        }
        if(a==1){
            cout << "YES" << endl;
        }
        else{
        if(d<=b){
            if((b-d)%2==0)  
            cout << "YES" << endl;
            else if(a%2!=0)
            cout << "YES" << endl;
            else
            cout << "NO" << endl;
        }
        else
        cout << "NO" << endl;
        }
    }
}
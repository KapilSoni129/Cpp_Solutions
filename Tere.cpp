#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {  
        long long n;
        cin>>n;
        if(n%2 == 0) {
             if(!(n&(n-1))) {
                cout<<n+1<<"\n";
            }
            else {
                cout<<(n&~(n-1))<<"\n";
            }
        }
        else {
            if(n > 1) {
                cout<<"1\n";
            }
            else {
                cout<<"3\n";
            }
        }
    }
    return 0;
}
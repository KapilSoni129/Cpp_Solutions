#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    while(n--){
        int n1,n2;
        int sum=1;
        cin >> n1 >> n2;
        int i=1;
        while(sum<=n1){
            sum=sum*2;
            i++;
        }
        //cout << i;
        if(i>n2)
        cout << 0 << endl;
        else if(i==n2)
        cout << 1 << endl;
        else{
            int t=1;
            while(i<n2){
                sum=sum-n1;
                while(sum<=n1){
                    sum=sum*2;
                    i++;
                }
                t++;
            }
            cout << t << endl;
        }
    }
}
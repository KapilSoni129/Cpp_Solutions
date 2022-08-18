#include <bits/stdc++.h>
using namespace std;
int mod(int x,int y){
    if(x>=y) return x-y;
    else return y-x;
}
int main(){
    int n;cin >> n;
    while(n--){
        int n1,s=0,n3=0,n4=0;cin>>n1;int arr[n1];
        for(int i=0;i<n1;i++){
            int n2;cin>>n2;
            arr[i]=n2;
        }
        for(int i=0;i<n1;i++){
            for(int j=i+1;j<n1;j++){
                for(int k=0;k<n1;k++){
                    if(mod(arr[i],arr[k])+mod(arr[j],arr[k])!=mod(arr[i],arr[j])) s=1;
                }
                if(s==1){
                    n3=i+1;n4=j+1;
                    break;
                }
            }
        }
        cout << n3 << " " << n4 << endl;
    }
}
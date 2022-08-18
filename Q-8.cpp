#include <bits/stdc++.h>
#define ll long long
using namespace std;
int mod(ll a,ll b){
  if((a-b)<0) return b-a;
  else return a-b;
}
int minarr(ll arr[],ll n){
  int m=arr[0];int l=0; 
  for(int i=0;i<n;i++){
    if(arr[i]<=m){
      m=arr[i];l=i;
    }
  }
  return l;
}
int main(){
    ll n;cin >> n;ll arr[n+1];
    arr[0]=0;
    for(int i=1;i<n+1;i++){
      ll a;cin>>a;
      arr[i]=a;
    }
    arr[0]=arr[n];ll arr1[n];
    for(int i=0,j=0;i<n;i++,j++){
      arr1[i]=mod(arr[j],arr[j+1]);
    }
    // for(int i=0;i<n;i++) cout << arr1[i];
    ll m=minarr(arr1,n);
    // cout << m <<endl;
    if(m==0) cout << n << " " << 1 << endl;
    else cout << m << " " << m+1 << endl;
}   
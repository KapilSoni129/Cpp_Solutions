#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll sumofn(ll n){
  return n*(n+1)/2;
}
ll binarySearch (ll low,ll high,ll k){
    ll mid;
    while (low <= high){
      if(sumofn(low>=k))
      return low;
      else{
        mid = (low+high)/2;
        if (sumofn(mid) == k || (k > sumofn(mid-1) && k < sumofn(mid)))
            return mid;
        else if (k > sumofn(mid) && k < sumofn(mid+1))
            return mid+1;
        else if (k > sumofn(mid))
            low = mid+1;
        else
            high = mid-1;
      }
    }
 return -1;
}
int main(){
    ll n;
    cin >> n;
    while(n--){
        ll n1,n2,n3;
        cin >> n1 >> n2 >> n3;
        cout << binarySearch(n1,n2,n3) << endl;
    }
}
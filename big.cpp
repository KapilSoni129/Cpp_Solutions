//Ar bhai ki haal chaal
//SAAB CHANGUS SI
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int xand(int n,int m){
    return n^m;
}
int cand(int n,int m){
    if(m<=n) return m;
    else return n;
}
int main(){
    int n;cin>>n;vector<int> v;
    v.push_back(1);
    int n1,b=1;cin>>n1;
    for(int i=2;i<n1+1;i++){
        if(i%2==0){
            b=xand(b,i);
            v.push_back(b);
        }
        else{
            b = cand(b,i);
            v.push_back(b);
        }
    }
    cout << b << endl;
    n=n-1;
    while(n--){
        int n2;cin>>n2;
        if(n2<v.size()) cout << v[n2-1] << endl;
        else {
            for(int i=v.size()-1;i<n2+1;i++){
                int x=v[i];
                if(i%2==0){
                    x = xand(x,i);
                    v.push_back(x);
                }
                else{
                    x = cand(x,i);
                    v.push_back(x);
                }                
            }
            cout << v[v.size()-1] << endl;
        }
    }
}
// #include <bits/stdc++.h>
// #include <iostream>
// using namespace std;

// #define ll long long int
// #define ld long long double
// #define ss string
// #define vecp vector<pair<int,int>>
// #define vecs vector<pair<string,int>>
// #define vec vector<int>

// /*    SAAB CHUNGUS SI     */

// int binarySearch(int arr[], int p, int r, int num) {
//    if (p <= r) {
//       int mid = (p + r)/2;
//       if (arr[mid] == num)
//          return mid ;
//       if (arr[mid] > num)
//          return binarySearch(arr, p, mid-1, num);
//       if (arr[mid] < num)
//          return binarySearch(arr, mid+1, r, num);
//    }
//    return -1;
// }

// /*    Code kya Dekh raha hai Bosdike    */

// int main(){
//     int n;cin>>n;
//     while(n--){

//     }
// }
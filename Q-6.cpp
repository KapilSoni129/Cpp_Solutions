#include <bits/stdc++.h>
using namespace std;
int n,arr[100005];
vector <int> v(100005);
int binarySearch (int k){
    int i,low=1,high=n,mid;
    while (low <= high){
        mid = (low+high)/2;
        if (v[mid] == k || (k > v[mid-1] && k < v[mid]))
            return mid;
        else if (k > v[mid] && k < v[mid+1])
            return mid+1;
        else if (k > v[mid])
            low = mid+1;
        else
            high = mid-1;
    }
}
int main (void){
    int i,m,k;
    while (scanf("%d",&n)!=EOF){
        for (i=1; i<=n; i++){
            cin >> arr[i];
            v[i] = v[i-1] + arr[i];
        }
        cin >> m;
        for (i=1; i<=m; i++){
            cin >> k;
            cout << binarySearch(k) << endl;
        }
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int p, int r, int num) {
   if (p <= r) {
      int mid = (p + r)/2;
      if (arr[mid] == num)
         return mid ;
      if (arr[mid] > num)
         return binarySearch(arr, p, mid-1, num);
      if (arr[mid] < num)
         return binarySearch(arr, mid+1, r, num);
   }
   return -1;
}

int main(){
    int num;
    cin >> num;
    int arr[num];
    for(int i=0;i<num;i++){
        cin >> arr[i];
    }
    sort(arr,arr+num);
    int num2;
    cin >> num2;
    while(num2--){
        int num3;
        cin >> num3;
        if(binarySearch(arr,0,num-1,num3)==-1)
        cout << "Paid" << endl;
        else
        cout << "Unpaid" << endl;
    }
}
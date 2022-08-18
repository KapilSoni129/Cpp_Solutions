#include <bits/stdc++.h>
using namespace std;
int BinSearch(int n,int A[],int key){
    int l=1;
    int h=n;
    while(l<=h){
        int mid=(l+h)/2;
        if(key==A[mid])
        return mid;
        if(key<A[mid])
        h=mid+1;
        else
        l=mid-1;
    }
    return 0;
}
int main(){
    int num1,num2;
    cin >> num1 >> num2;
    int time=240-num2;
    int arr[num1];
    arr[0]=5;
    for(int i=1;i<num1;i++){
        arr[i]=5*(i+1)+arr[i-1];
    }
    BinSearch(num1,arr,time);
}
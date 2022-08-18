#include <bits/stdc++.h>
using namespace std;
//coping and adding elements is expensive operations pass &v(there wil be no copy)
//v[i].first and v[i].second is for nested loops
void printVec(vector<pair<int,int>> &v){
    cout << "size : " << v.size() << endl;
    for(int i=0;i<v.size();i++){
        cout << v[i].first << " " << v[i].second << endl;
    }
    cout << endl;
}
int main(){
    //pair<int,string> p;
    //p=make_pair(2,"abc");
    //p={2,"abc"};
    //reference same or copy
    //pair<int,string> &p1=p;
    //p1.first=3;
    //cout << p.first << " " << p.second << endl;
    //int a[]={1,2,3};
    //int b[]={2,3,4};
    //pair <int,int> p_array[3];
    //p_array[0]={1,2};
    //p_array[1]={2,3};
    //p_array[2]={3,4};
    //swap(p_array[0],p_array[2]);
    //for(int i=0;i<3;i++){
    //    cout << p_array[i].first << " " << p_array[i].second <<endl;
    //}
    //We can also do input/output of pairs
    //vector<int> v;
    //vector<pair<int,int>> v1;
    //int n;
    //cin >> n;
    //while(n--){
    //    int x;
    //    cin >> x;
    //    printVec(v);
    //    v.push_back(x); //0(1)
    //}
    //printVec(v);
    //We can also declare size of vector and if do not give any input it will be ZERO
    //vector<int> v3;
    //v3.push_back(7);
    //v3.push_back(6);
    //printVec(v3);
    //& if we need same vector not copy
    //vector<int> v4=v3; //0(n)
    //printVec(v3);
    //v3.pop_back();
    //printVec(v3);
    //printVec(v4);
    //vector<pair<int,int>> v;
    //printVec(v);
    //int n;
    //cin >> n;
    //for(int i=0;i<n;i++){
    //    int x,y;
    //    cin >> x >> y;
    //    v.push_back({x,y});
    //}
    //printVec(v);
    // 10 vectors
    //vector<int> v[10];
}
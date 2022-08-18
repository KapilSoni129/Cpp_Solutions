#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define ll long long int
#define ld long long double
#define ss string
#define vecp vector<pair<int,int>>
#define vecs vector<pair<string,int>>
#define vec vector<int>
#define fl(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define sortv(v) sort(v.begin(),v.end())

/*    SAAB CHUNGUS SI     */

/*    Code kya Dekh raha hai Bosdike    */
const int maxn=10000+10;
 
int a[maxn];


int main()
{
    int n,k;
    while(cin>>n>>k)
    {
        int ans=0;
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
        {
            if(a[i]<8)
            {
                if(k>=a[i])
                {
                    k-=a[i];
                    if(k==0)
                    {
                         ans=i+1;
                        break;
                    }
                }
                else
                {
                    k=0;
                    ans=i+1;
                    break;
                }
            }
            else
            {
                if(k<=8)
                {
                    k=0;
                    ans=i+1;
                    break;
                }
                else
                {
                    k-=8;
                    a[i]-=8;
                    a[i+1]+=a[i];
                    if(k==0)
                    {
                         ans=i+1;
                        break;
                    }
                }
            }
        }
        if(!ans) cout<<-1<<endl;
        else cout<<ans<<endl;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
        int j=0;
    while(j<n)
    {
        if(a[j+2]==1 || j+2>=n)
            j++;
        else
            j=j+2;
    cnt++;
    }
    cout<<cnt-1;
}

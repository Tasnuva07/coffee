#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[101],x,*maxi;
    cin>>n;
    for(int i=0;i<100;i++)
        a[i]=0;
    for(int i=0;i<n;i++){
        cin>>x;
        a[x]++;
    }
    maxi=max_element(a,a+100);
    cout<<*maxi;
}

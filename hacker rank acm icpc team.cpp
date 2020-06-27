#include<bits/stdc++.h>
using namespace std;
int op(string s1,string s2,int m)
{
    int cnt=0;
    for(int i=0;i<m;i++)
    {
        if((s1[i]=='0' && s2[i]=='1')||(s1[i]=='1' && s2[i]=='0')||(s1[i]=='1' && s2[i]=='1'))
           cnt++;
    }
    return cnt;//cout<<cnt<<" ";
}
int main()
{
    int n,m,res;
    cin>>n>>m;
    string s[n];
    for(int i=0;i<n;i++)
        cin>>s[i];
    int max=0,num;
     for(int i=0;i<n;i++)
     {
         for(int j=i+1;j<n;j++)

           {
              res=op(s[i],s[j],m);
              if(max<res)
              {
                  max=res;
                  num=1;
              }
              else if(max==res)
              {
                  num++;
              }
           }
     }
     cout<<max<<" "<<num;
}

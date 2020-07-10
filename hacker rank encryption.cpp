#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int x=ceil(sqrt(s.length()));
   int i=0;
   while(i<x)
   {
       for(int j=i;j<s.length();j=j+x)
       {
           cout<<s[j];
       }
       cout<<" ";
       i++;
   }
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    long long n,cnt=0,ans,rem=0;
    cin>>n;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='a')
         cnt++;
    }
      ans=(n/s.length())*cnt;
    rem=n%s.length();
    for(int i=0;i<rem;i++){
            if(s[i]=='a')
            {
                ans++;
            }
    }
    cout<<ans;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,b,w,bc,wc,z,total,ans;
    cin>>t;
    for(long long i=0;i<t;i++){
        cin>>b>>w>>bc>>wc>>z;
        if(z>=bc && z>=wc)
        {
            ans=b*bc+w*wc;
        }
      //if((z<bc && z<wc)||(z<))
      else if(z<bc && z<wc)
      {
         if(bc>wc){
           if(wc+z>=bc)
                ans=wc*w+bc*b;
              else
                ans=(wc+z)*b+w*wc;
         }
           else if(bc<wc)
            {
              if(bc+z>=wc)
                ans=bc*b+wc*w;
              else
               ans=(bc+z)*w+b*bc;
          }
           else
            ans=bc*b+wc*w;
      }
      else
      {
          if(bc<wc)
          {
              if(bc+z>=wc)
                ans=bc*b+wc*w;
              else
               ans=(bc+z)*w+b*bc;
          }
          else
          {
              if(wc+z>=bc)
                ans=wc*w+bc*b;
              else
                ans=(wc+z)*b+w*wc;
          }
      }

 cout<<ans<<endl;
    }
    //cout<<ans;
}

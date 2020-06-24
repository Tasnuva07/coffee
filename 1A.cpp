    #include<iostream>
    #include<math.h>
    using namespace std;
    int main()
    {
        long long n,m,a,ans,p,q;
        double i,j;
        cin>>n>>m>>a;
        i=(double)n/a;
        j=(double)m/a;

       p=ceil(i);
       q=ceil(j);
       ans=p*q;
       cout<<ans<<endl;

    }

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long q,n;
    cin>>q;
    while(q--)
    {
        cin>>n;
        long long row[n],col[n];
        for(int i=0;i<n;i++)
        {
            row[i]=0;
            col[i]=0;
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                int x;
                cin>>x;
                row[i]+=x;
                col[j]+=x;
            }
        }
        sort(row,row+n);
        sort(col,col+n);
        bool p=true;
        for(int i=0;i<n;i++)
        {
            if(row[i]!=col[i]){
                p=false;
                break;
            }
        }
        if(p)
            cout<<"Possible"<<endl;
        else
            cout<<"Impossible"<<endl;
    }
}

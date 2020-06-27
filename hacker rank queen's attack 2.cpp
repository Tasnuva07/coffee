#include<bits/stdc++.h>
using namespace std;

int range(int n,int x,int y)
{
    return (x<=n && x>0 && y<=n &&y>0);

}
int check(int n,int x,int y,int xx,int yy,map<pair<int,int>,int>mp)
{
    int ans=0;
    while(range(n,x,y)&&!mp[{x,y}])
        {
            x+=xx;
            y+=yy;
            ans++;
        }
        return ans;
}
int numberofpos(int n,int k,int x,int y,int obstposx[],int obstposy[])
{
    int x1,y1,ans=0;
    map<pair<int,int>,int>mp;
    while(k--)
    {
        x1=obstposx[k];
        y1=obstposy[k];
        mp[{x1,y1}]=1;
    }
    ans+=check(n,x+1,y,1,0,mp);
    ans+=check(n,x-1,y,-1,0,mp);
    ans+=check(n,x,y+1,0,1,mp);
    ans+=check(n,x,y-1,0,-1,mp);
    ans+=check(n,x+1,y+1,1,1,mp);
    ans+=check(n,x+1,y-1,1,-1,mp);
    ans+=check(n,x-1,y+1,-1,1,mp);
    ans+=check(n,x-1,y-1,-1,-1,mp);
    return ans;
}
int main()
{

    int n,k,Qposx,Qposy;
    cin>>n>>k;
    cin>>Qposx>>Qposy;
   int obstposx[k],obstposy[k];
    for(int i=0;i<k;i++)
        cin>>obstposx[i]>>obstposy[i];
    cout<<numberofpos(n,k,Qposx,Qposy,obstposx,obstposy);
    return 0;
}

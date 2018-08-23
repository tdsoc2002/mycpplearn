#include <iostream>
using namespace std;
int main()
{
    int n,x,y,minn=1e9;
    cin>>n;
    for(int i=1;i<=3;i++)
    {
        cin>>x>>y;
        if(n%x==0)
            minn=min(minn,n/x*y);
        else minn=min(minn,(n/x+1)*y);
    }
    cout<<minn;
    return 0;
}
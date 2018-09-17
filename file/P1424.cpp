#include <iostream>
using namespace std;
int main()
{
    int a,b,i,sum=0;
    cin>>a>>b;
    for (i=a;i<=a+b-1;++i)
    {
        if (i%7==6 || i%7==0)
        {
            continue;
        }
        sum+=250;
    }
    cout<<sum<<endl;
    return 0;
}
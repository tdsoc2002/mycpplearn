#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
    int a=0,b=0,max=0,day=0;
    for(int i=1;i<=7;i++)
    {
        cin>>a>>b;
        if(max<(a+b)&&(a+b)>8)
        {
             max=a+b;day=i;
        }
    else continue;
   }
 cout<<day;
 return 0;
}//修改过后的~

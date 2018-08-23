#include<iostream> 
using namespace std;
int main()
{
    int a[12],i,money=0,now=0;
    for(int i=0;i<=11;i++)cin>>a[i];
    for(int i=0;i<=11;i++){
        money=((now+300-a[i])/100)*100+money;
        now=(now+300-a[i])-(now+300-a[i])/100*100;
    if(now<0)
            {
            cout<<"-"<<i+1;
            return 0;
            }
        }
        cout<<money*1.2+now<<endl;
    return 0;
}

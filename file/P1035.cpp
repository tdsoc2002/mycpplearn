#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int k,i=0;
    double s=0.0000;
    cin>>k;
    do
    {
        i++;
        s=s+ (1.0/i);
    } while (s<=k);
    printf("%d",i);
    return 0;
}
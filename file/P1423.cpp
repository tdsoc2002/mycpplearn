#include<iostream>
using namespace std;
int main()
{
  double x;  cin>>x;
  double sum=0.0;
  int step=0; 
  double tmp=2;
  while(sum<=x)
  { 
    sum=sum+tmp;
    tmp=tmp*0.98; 
    step++;     
  }
  cout<<step<<endl;
  return 0;
}
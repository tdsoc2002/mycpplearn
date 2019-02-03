#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
int n1=4,n2=5,n3=1;
    n3 = n1> n2;
    cout <<n3<<endl;
    n3=n1<n2;
    cout <<n3<<endl;
    n3=n1==4;
    cout <<n3<<endl;
    n3=n1!=4;
    cout <<n3<<endl;
    n3=n1=1+3;
    cout <<n3<<endl;
    system("pause");
    return 0;
}
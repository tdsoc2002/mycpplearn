#include <iostream>
#include <windows.h> //title
#include <cstdio>
#include <iomanip>
#include <cmath>
#include <stdlib.h>//等待后进行
using namespace std;
int main ()
{
    SetConsoleTitle("膜法控制台");
    //败家.jpg
    double price_djip4p =8888;
    double price_djios =780;
    double price_pc =12000;
    double total = 0;
    double zk =0;
    total = price_djios + price_djip4p + price_pc;
    //单价，大于5000有折扣。或者三种的合大于优惠30%，要不然没有
    if(price_djios  >500 || price_djip4p > 5000 || price_pc > 5000 || total >5000)
    {
        zk=0.7;
    }
    else
    {
       zk=1;
    }
    //总价大于13000打7折否则其余5折
    if (total > 13000)
    {
        zk = 0.7;
    }
    else
    {
        zk = 0.9;
    }
    total = total * zk; // total *= zk
    cout << "end ="  << total <<endl;

    system("pause"); // stdlib.h 
    return 0;
}

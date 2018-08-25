#include <iostream>
#include <windows.h> //title
#include <cstdio>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;
int main ()
{
    //SetConsoleTitle("膜法控制台");
    //使用循环模拟拳皇
    int hp1 =100;
    int hp2 =100;
    int attack1 =0;
    int attack2 =0;
    int randNum;//随机数定义
    srand(time(NULL));

    while( hp1>0 && hp2>0 )
    {
    //1模拟出招 随机控制。
    randNum = rand();
    if (randNum % 2 == 1)
    {
        attack1 = (int)(5 + 10 *rand()/(RAND_MAX + 0.1));
        attack2 = (int)(5 + 10 *rand()/(RAND_MAX + 0.1));
        hp2 -= attack1;
        hp1 -= attack2;
    }
  else
    {
        attack2 = (int)(5 + 10 *rand()/(RAND_MAX + 0.1));
        attack1 = (int)(5 + 10 *rand()/(RAND_MAX + 0.1));
        hp1 -= attack1;
        hp2 -= attack2;
    }
    }
    //打印血量
    cout << "Hp1:\t" << hp1 << endl;
    cout << "Hp2:\t" << hp2 << endl;
    system("pause"); // stdlib.h 
    return 0;
}

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
    SetConsoleTitle("膜法控制台");
    int a =1,b =10;
    do
    {
    b -=a;//9
    a++;//a = 2
    }while(b--<0) // while(b<0) b--
    //do while循环 先做do 后做while判断 如果是则继续执行
    system("pause"); // stdlib.h 
    return 0;
}

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
    SetConsoleTitle("Ĥ������̨");
    int a =1,b =10;
    do
    {
    b -=a;//9
    a++;//a = 2
    }while(b--<0) // while(b<0) b--
    //do whileѭ�� ����do ����while�ж� ����������ִ��
    system("pause"); // stdlib.h 
    return 0;
}

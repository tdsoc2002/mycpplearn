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
    //SetConsoleTitle("Ĥ������̨");
    //ʹ��ѭ��ģ��ȭ��
    int hp1 =100;
    int hp2 =100;
    int attack1 =0;
    int attack2 =0;
    int randNum;//���������
    srand(time(NULL));

    while( hp1>0 && hp2>0 )
    {
    //1ģ����� ������ơ�
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
    //��ӡѪ��
    cout << "Hp1:\t" << hp1 << endl;
    cout << "Hp2:\t" << hp2 << endl;
    system("pause"); // stdlib.h 
    return 0;
}

/*
 * @Author: 2Js_Island 
 * @Date: 2018-08-26 16:52:32 
 * @Last Modified by: 2Js_Island
 * @Last Modified time: 2018-08-28 20:52:25
 */
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
    SetConsoleTitle("USER：ROOT");
    double power[99];//数组大小确定不能更改
    int powercount = 0;//当前数组的个数
    power[powercount++] = 123;
    power[powercount++] = 133;
    power[powercount++] = 143;
    power[powercount++] = 153;
    double temp;
    for(int i = 0; i < powercount ;i++)
    {
        for(int j =0;j<powercount - i - 1;i++)
        {
            if(power[j]<power[j+1])
            {
                temp = power[j];
                power[j]=power[j+1];
                power[j+1]=temp;
            }
        }
    }
    for(int i =0;i < powercount;i++)
    {
        cout << power[i]<<"\t";
    }
    system("pause"); // stdlib.h
    return 0;
}

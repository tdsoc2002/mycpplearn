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
    SetConsoleTitle("USER��ROOT");
    int temp;
    int nums[]={15,9,5,6,54,64};
    for (int i=0; i <6-1;i++)//����������
    {
        for(int j =0; j<5-i;j++)
        {
            if (nums[j]<nums[j+1])
            { 
                temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1]=temp;
            }

        }
    }
    system("pause"); // stdlib.h
    return 0;
}

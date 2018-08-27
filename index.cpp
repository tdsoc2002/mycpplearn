/*
 * @Author: 2Js_Island 
 * @Date: 2018-08-26 16:52:32 
 * @Last Modified by: 2Js_Island
 * @Last Modified time: 2018-08-26 23:01:36
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
    SetConsoleTitle("Ä¤·¨¿ØÖÆÌ¨");
    for(int i =0;i<4;i++)
    {
        for(int l =0;l <= 2 * i;l++)
        {
            if(l ==0||l==2 * i)
           { 
                cout << '*';
           }
           else
           {
               cout<<' ';
           }
        }
        cout<<endl;
    }
    system("pause"); // stdlib.h
    return 0;
}

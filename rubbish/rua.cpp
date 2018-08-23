#include <iostream>
#include <windows.h>
#include <cmath>
#include <iomanip>
#include <stdlib.h>//等待任意键后操作
using namespace std;
int main()
{
	SetConsoleTitle("这个世界需要更多的英雄！");
	/**伤害*/
	double value_attack = 666.233;
	/**攻击成长*/
	double value_attack_grouth = 0.1;
	/**攻击距离*/
	double value_attack_distance = 888;
	/**护甲*/
	double value_defence =123;
	/**护甲成长值*/
	double attack1 = 272;
	double attack2 = 250;
	double attack3 = 240;
	double value_defence_growth =3.6;
	cout <<"英雄名称：Rua!"<<endl;
	cout << "伤害:"<<value_attack<<"(+"<<value_attack_grouth<<")\t"
		 << "攻击距离"<< value_attack_distance << endl;
	cout << "护甲"<< value_defence << "成长值:" << value_defence_growth <<endl;
	cout << left;
	cout << setfill('_');
	cout << "Nothing\n"<<
		setw(8)<< attack1<<
		setw(8)<< attack2<< 
		setw(8)<< attack3<<endl;

	/*End Mode*/
	system("pause"); // stdlib.h 
}
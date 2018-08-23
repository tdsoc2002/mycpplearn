#include <iostream>
#include <windows.h>
#include <cmath>
#include <iomanip>
#include <stdlib.h>//�ȴ�����������
using namespace std;
int main()
{
	SetConsoleTitle("���������Ҫ�����Ӣ�ۣ�");
	/**�˺�*/
	double value_attack = 666.233;
	/**�����ɳ�*/
	double value_attack_grouth = 0.1;
	/**��������*/
	double value_attack_distance = 888;
	/**����*/
	double value_defence =123;
	/**���׳ɳ�ֵ*/
	double attack1 = 272;
	double attack2 = 250;
	double attack3 = 240;
	double value_defence_growth =3.6;
	cout <<"Ӣ�����ƣ�Rua!"<<endl;
	cout << "�˺�:"<<value_attack<<"(+"<<value_attack_grouth<<")\t"
		 << "��������"<< value_attack_distance << endl;
	cout << "����"<< value_defence << "�ɳ�ֵ:" << value_defence_growth <<endl;
	cout << left;
	cout << setfill('_');
	cout << "Nothing\n"<<
		setw(8)<< attack1<<
		setw(8)<< attack2<< 
		setw(8)<< attack3<<endl;

	/*End Mode*/
	system("pause"); // stdlib.h 
}
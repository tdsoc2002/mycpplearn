/*
 * @Author: 2Js_Island 
 * @Date: 2018-08-26 16:52:55 
 * @Last Modified by:   2Js_Island 
 * @Last Modified time: 2018-08-26 16:52:55 
 */
#include <iostream>
#include <cstdio>//CPP写法防止错误
#include <stdio.h>//C 环境
#include <stdlib.h>//按任意键继续
#include <climits>
#include <cmath>
#include <iomanip>//控制精度头文件
/*看到没头文件 ↑*/
//2018年8月22日托管于Github！
using namespace std;

/*↑ 留的定义空间*/
/*文件主体*/
int a =1,b =10;
    do
    {
    b -=a;//9
    a++;//a = 2
    }while(b--<0) // while(b<0) b--
    //do while循环 先做do 后做while判断 如果是则继续执行
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

    int n =0;
while (n++<= 2)// 先把n <=计算完成再算n++
    {
        cout << n << endl; 
    }
cout << n;

int k=1,n=10,m=1;
    while(k<=n)
    {
        m *= 2;
        n--;
    }
    cout << m;


string password;//循环测试密码三次，第一次写循环。
    int i =0;
    while(i<3)
    {
        cout << "请输入密码:"<<endl;
        cin >> password;
        cout << "你输入的密码是:"<< password<<endl;
        i++;
        //判断是否正确
        if(password == "12345678")
        {
            if(i == 3)
            {
                cout<<"错了三次了SB！" ;
                exit(0);//可以定义错误码！
            }
            else
            {
             cout <<"true"<<endl;
            }
        }
        else
        {
        cout << "SB密码错误"<<endl;
        }
    }


int main()
int num =1;//控制循环次数
   int sum =0;//保存累加和
   while(num <= 100)
   {
      // cout << num <<endl;
      sum +=num;//结果保存1+un100的值
    //为了循环退出
    cout << sum <<endl;//当前状态
    num++;
   }
   cout << "结果:" <<sum<<endl;
{
 switch(choice)
    {
        case 1:
        cout << 1 << endl;
        //break;
        case 2:
        cout << 2 << endl;
        //break;
        case 3:
        cout << 3 << endl;
        //break;
        case 4:
        cout << 4 << endl;
        //break;
    }


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

	
	char pan = '\0';
    cout << "输入判断:";
    cin >> pan;
    if ('pan' >= 'A' && 'pen'<= 'Z')//if判断语句
    {
        cout << "true"<<endl;
    }
    else
    {
        cout <<"fales"<<endl;
    }

 
    cout << boolalpha;//true of fales判断对错。
    cout << "15>20?\t"<< (15>20)<<endl;
    int num = 1024;
    //我也不知道我写这个注释想干啥来着！
    num += 90; //num = num+90
    cout << num << endl;
	
	//string 字符串类型名
    string sb ="我是谁，我在哪。";//string的错误√用法
    cout << sb <<endl;
	


    
    cout << "\a"<< endl;//提示音???
    cout << "输入膜法密码：\t";
    int num;
    char ch , ch1 , ch2;
    cin >> num;
    ch = cin.get();
    ch1 =cin.get();
    ch2 =cin.get();
    cout << num <<"\t"<< ch <<"\t"<< ch1 <<"\t"<< ch2 <<endl;

	
	//精度控制
	float numf = 10 / 3.0;
	double numd = 10 / 3.0;
	cout << fixed;//让浮点型固定用数字方式显示
	cout << setprecision(3);//控制小数显示的位数
	cout << "numFloat = " << numf *100000 << endl;
	cout << "numDouble = " << numd *100000 << endl;
	
	

	// sizeof测量数字的精度
	cout << sizeof(double) << endl;
	cout << sizeof(long double) << endl;


	
	//控制double的显示精度
	cout << setprecision(2);
	//强制小数方式显示
	cout << fixed ;
	//输出Double类型数据
	double dbnum = 100/3.0;
	cout << dbnum*1000 << endl;

   int a = 99;
   int b = 1;
   int c;
   c = a + b;
   cout << "Line 1  " << c << endl ;
   c = a - b;
   cout << "Line 2 " << c << endl ;
   c = a * b;
   cout << "Line 3 " << c << endl ;
   c = a / b;
   cout << "Line 4 " << c << endl ;
   c = a % b;
   cout << "Line 5 " << c << endl ;
 
   int d = 10;   //  测试自增、自减
   c = d++;
   cout << "Line 6  " << c << endl ;
 
   d = 10;    // 重新赋值
   c = d--;
   cout << "Line 7  " << c << endl ;

	int a, b;
	int c;
	a =10;
	b =2;
	c = a + b;
	cout << c << endl;*/

	//求圆柱体的体积
	const float Pi = 3.14f;// 定义 Float类型常量
	float r = 4.5;
	float h = 233;
	double v3 = Pi * pow(r,2) * h; // pow(数据,次方)
	cout << v3 << endl;

	float num = 321654.123456789;
	cout << num << endl;

	int num1 = 10; // int 定义变量 为 xx 格式 int () = ()
	int num2 = 8;
	cout << num1 << "口心思\n" ;
	cout << num2 << "目共赏" << endl;
	/**另一种写法
	cout << num1 << "xxxx\n"
	     << num2 << xxxxxx << endl;
	**/
	/*/n可以表示为换行*/
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	a = c - a;//几个小时 
	b = d - b;//算几分钟 
	if (b<0)//前面几分钟小于后面几分钟 
	{
		a--;
		b += 60;//用一小时换取60分钟 //电费计算
	}
	cout << a << "" << b << endl;//输出答案 */

	int salary = 2500; //声明和使用变量
	//打印月薪
	cout << "明的月薪是：" << salary << endl;
	cout << "Hello World"; // 输出 Hello World */
	
	system("pause"); // stdlib.h 等待任意键
	return 0;
}
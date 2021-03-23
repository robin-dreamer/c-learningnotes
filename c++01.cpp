#include <iostream>
using namespace std;
#define day 7
int main()
{
	cout << "c++" << endl;   //输出打印函数cout <<"内容"<< endl;
	/**/
	int a = 10;
	cout << "a=" << a <<endl;
	cout << "一周共有：" << day<< "天" << endl;
	const int month = 12;
	cout << "一年有：" << month << "月" << endl;
	

	int Aa = 2;
	int aa = 9;
	cout << aa << endl;
	

	//变量，建议见面直译，数据类型，分配合适的空间
	short num1 = 65536;
	int num2 = 10;
	long num3 = 10;
	long long num4 = 10;
	cout << num1 << endl;
	cout << sizeof(num1) << endl;
	cout << sizeof(num3) << endl;
	//sizeof(数据类型、变量名）求字节
	//整型：short<int<=long<long long 2<4<=4<=8
	//实型：表示小数。单精度float 4字节 7位有效，双精度double 8字节 15~16有效
		//3.14 3位有效
		float f1 = 3.14f;//加f表单精度
		cout << f1 << endl;
		double d1 = 3.14;
		cout << d1 << endl;
//默认情况下，输出一个小数，会显示6为有效数字
		cout << sizeof(float) << endl;//4字节
		cout << sizeof(double) << endl;//8字节
//float 4字节，double 8字节
//科学计数法
		float f2 = 3e2;//3*10^2
		cout << f2 << endl;
		float f3 = 3e-2;//3*10^(-2)
		cout << f3 << endl;
//字符型  char ch='a';
		char ch = 'a';
		cout << ch << endl;
		cout << sizeof(char) << endl;//char 只占1字节
		//char ch2 = "a";//要用单引号
		//char ch2 = 'asdfg';单引号内只能有1个字符
		cout << (int)ch << endl;//a的ASCII码是97,ch代表a
		//a - 97
		//A - 65
		char a1 =q;




	system("pause");    
	return 0;
}
#include <iostream>
using namespace std;
#define day 7
int main()
{
	cout << "c++" << endl;   //�����ӡ����cout <<"����"<< endl;
	/**/
	int a = 10;
	cout << "a=" << a <<endl;
	cout << "һ�ܹ��У�" << day<< "��" << endl;
	const int month = 12;
	cout << "һ���У�" << month << "��" << endl;
	

	int Aa = 2;
	int aa = 9;
	cout << aa << endl;
	

	//�������������ֱ�룬�������ͣ�������ʵĿռ�
	short num1 = 65536;
	int num2 = 10;
	long num3 = 10;
	long long num4 = 10;
	cout << num1 << endl;
	cout << sizeof(num1) << endl;
	cout << sizeof(num3) << endl;
	//sizeof(�������͡������������ֽ�
	//���ͣ�short<int<=long<long long 2<4<=4<=8
	//ʵ�ͣ���ʾС����������float 4�ֽ� 7λ��Ч��˫����double 8�ֽ� 15~16��Ч
		//3.14 3λ��Ч
		float f1 = 3.14f;//��f������
		cout << f1 << endl;
		double d1 = 3.14;
		cout << d1 << endl;
//Ĭ������£����һ��С��������ʾ6Ϊ��Ч����
		cout << sizeof(float) << endl;//4�ֽ�
		cout << sizeof(double) << endl;//8�ֽ�
//float 4�ֽڣ�double 8�ֽ�
//��ѧ������
		float f2 = 3e2;//3*10^2
		cout << f2 << endl;
		float f3 = 3e-2;//3*10^(-2)
		cout << f3 << endl;
//�ַ���  char ch='a';
		char ch = 'a';
		cout << ch << endl;
		cout << sizeof(char) << endl;//char ֻռ1�ֽ�
		//char ch2 = "a";//Ҫ�õ�����
		//char ch2 = 'asdfg';��������ֻ����1���ַ�
		cout << (int)ch << endl;//a��ASCII����97,ch����a
		//a - 97
		//A - 65
		char a1 =q;




	system("pause");    
	return 0;
}
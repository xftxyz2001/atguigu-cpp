#include<iostream>

using namespace std;

int main()
{
	int a = 10, b = 25;
	int& ref = a;

	cout << "ref = " << ref << endl;

	cout << "a�ĵ�ַΪ��" << &a << endl;
	cout << "ref�ĵ�ַΪ��" << &ref << endl;

	ref = 15;

	cout << "a = " << a << endl;

	ref = b;
	cout << "ref�ĵ�ַΪ��" << &ref << endl;
	cout << "a = " << a << endl;

	//int& ref2;

	// ���õ�����
	int& rref = ref;

	rref = 36;
	cout << "a = " << a << endl;

	//int& ref2 = 10;
	//double d = 2.5;
	//int& ref3 = d;

	// �Գ���������
	const int zero = 0;
	const int& cref = zero;

	//cref = 10;    // ����

	//int& cref = zero;

	int i = 30;
	const int& cref2 = i;   // ��ȷ
	const int& cref3 = 10;
	double d = 3.14;
	const int& cref4 = d;

	int& cref5 = i;
	cref5 = 56;
	//cref2 = 32;


	cin.get();
}

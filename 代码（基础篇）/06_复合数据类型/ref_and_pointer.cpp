#include<iostream>

using namespace std;

int main()
{
	int a = 10;

	// ���ú�ָ�볣��
	int& ref = a;
	int* const p = &a;

	ref = 20;
	cout << "a = " << a << endl;
	*p = 15;
	cout << "a = " << a << endl;

	cout << "a�ĵ�ַΪ��" << &a << endl;
	cout << "ref�ĵ�ַΪ��" << &ref << endl;
	cout << "p�ĵ�ַΪ��" << &p << endl;
	cout << "p��ֵΪ��" << p << endl;

	// ��ָ�������
	int* ptr = &a;
	int*& pref = ptr;

	*pref = 100;
	cout << "a = " << a << endl;

	cin.get();
}
#include<iostream>

using namespace std;

int main()
{
	// ����Ķ���
	int a1[10];

	const int n = 4;
	double a2[n];

	int i = 4;
	//double a3[i];   // ����Ԫ�ظ�������Ϊ����

	// ��ʼ��
	int a3[4] = {1,2,3,4};
	float a4[] = {2.5, 3.8, 1.79};
	short a5[10] = {3,6,9};    // ��ȷ��ֻ������ǰ����Ԫ�ظ�ֵ������Ԫ�ض�Ϊ0
	//short a6[2] = { 3,6,9 };   // ���󣬳�ʼֵ̫��
	//int a6[4] = a3;     // ���󣬲�������һ�������������и�ֵ

	char c[10];
	cout << "c = " << c << endl;

	cout << "----------------------------" << endl;

	// ����
	int a[] = { 1,2,3,4,5,6,7,8 };
	cout << "a[2] = " << a[2] << endl;
	a[2] = 36;
	cout << "a[2] = " << a[2] << endl;

	//cout << "a[8] = " << a[8] << endl;

	// ��ȡ���鳤��
	cout << "a������ռ�ռ��СΪ��" << sizeof(a) << endl;
	cout << "a������ÿ��Ԫ����ռ�ռ��СΪ��" << sizeof(a[0]) << endl;

	int aSize = sizeof(a) / sizeof(a[0]);
	cout << "����a�ĳ���Ϊ��" << aSize << endl;

	cout << "a = " << a << endl;

	// ����
	for (int i = 0; i < aSize; i++)
	{
		cout << "a[" << i << "] = " << a[i] << endl;
	}

	for (int num : a)
	{
		cout << num << endl;
	}

	cin.get();
}
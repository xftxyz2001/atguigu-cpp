#include<iostream>

using namespace std;

int main()
{
	// ����ָ��
	int* p1;
	long* p2;
	long long* p3;

	cout << "p1���ڴ��еĳ���Ϊ��" << sizeof(p1) << endl;

	cout << "p2���ڴ��еĳ���Ϊ��" << sizeof(p2) << endl;

	cout << "p3���ڴ��еĳ���Ϊ��" << sizeof(p3) << endl;

	// ָ���ʹ��
	int a = 10;
	int b = 20;
	long c = 35;

	p1 = &a;
	p2 = &c; cout << *p3;
	cout << "a�ĵ�ַΪ��" << &a << endl;
	cout << "b�ĵ�ַΪ��" << &b << endl;
	cout << "c�ĵ�ַΪ��" << &c << endl;

	cout << "p1 = " << p1 << endl;
	cout << "p2 = " << p2 << endl;

	*p1 = 12;
	cout << "a = " << a << endl;

	p1 = &b;
	*p1 = 25;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	//cout << "* p3 = " << *p3 << endl;

	// ��ָ��
	int* ptr = nullptr;
	ptr = NULL;
	ptr = 0;

	int zero = 0;
	//ptr = zero;

	// void * ָ��
	int i = 100;
	char ch = 'a';
	string s = "hello";

	void* vp = &i;
	vp = &ch;
	vp = &s;
	//*vp;   // ����

	cout << "-------------------------------" << endl;

	// ָ��ָ���ָ��
	i = 1024;
	int* pi = &i;
	int** ppi = &pi;

	cout << "i = " << i << endl;
	cout << "pi = " << pi << endl;
	cout << "ppi = " << ppi << endl;
	cout << "*pi = " << *pi << endl;
	cout << "*ppi = " << *ppi << endl;
	cout << "**ppi = " << **ppi << endl;

	cout << "-------------------------------" << endl;

	// ָ������ָ��
	const int c1 = 10, c2 = 25;
	const int* pc = &c1;   // pc��ָ��int���ͳ�����ָ��

	cout << "*pc = " << *pc << endl;

	//*pc = 15;
	pc = &c2;
	cout << "*pc = " << *pc << endl;

	// ָ�볣��
	int* const cp = &i;
	//cp = &a;
	*cp = 12;
	cout << "i = " << i << endl;

	const int* const ccp = &c1;

	cout << "-------------------------------" << endl;

	// ָ�������
	int arr[] = {1,2,3,4,5};

	cout << "arr = " << arr << endl;
	cout << "&arr[0] = " << &arr[0] << endl;
	cout << "&arr[1] = " << &arr[1] << endl;

	int* pia = arr;
	cout << "* pia = " << *pia << endl;
	*pia = 100;
	//arr[0] = 100;

	for (int num : arr)
	{
		cout << num << "\t";
	}
	cout << endl;

	cout << "pia = " << pia << endl;
	cout << "pia + 1 = " << (pia + 1) << endl;

	*(pia + 1) = 256;
	*(arr + 3) = 126;
	//arr[3] = 126;


	for (int num : arr)
	{
		cout << num << "\t";
	}
	cout << endl;

	cout << "-------------------------------" << endl;

	// ָ�����������ָ��
	int* pa[5];   // ָ������
	int(* ap)[5];   // ָ�������ָ��

	cout << "pa���ڴ��еĳ���Ϊ��" << sizeof(pa) << endl;
	cout << "ap���ڴ��еĳ���Ϊ��" << sizeof(ap) << endl;

	pa[0] = &i;
	pa[1] = arr;
	pa[2] = arr + 2;

	ap = &arr;    // apָ���������arr����
	cout << "*ap = " << *ap << endl;
	cout << "**ap = " << **ap << endl;
	cout << "*(*ap + 1) = " << *(*ap + 1) << endl;
	cout << "**ap + 1 = " << **ap + 1 << endl;

	cin.get();
}
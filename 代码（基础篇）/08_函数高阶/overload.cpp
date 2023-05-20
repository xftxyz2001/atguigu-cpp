#include <iostream>

using namespace std;

// const���������ز���
void fun(int x)
{
	cout << x << endl;
}

// ������Ϊ�βΣ�������const��ȫ�ȼ�
//void fun(const int x)
//{
//	cout << x << endl;
//}

void fun2(int* p) {}
//void fun2(int* const pc) {}

void fun3(int& x) { cout << "1" << endl; }
void fun3(const int& x) { cout << "2" << endl; }

void fun4(int* p) {}
void fun4(const int* p) {}

void f() { cout << "1" << endl; }
void f(int x) { cout << "2" << endl; }
void f(int x, int y) { cout << "3" << endl; }
void f(double x, double y = 1.5) { cout << "4" << endl; }

// ����������ز���
void print(int i)
{
	cout << "i: " << i << endl;
}

void print(double d)
{
	cout << "d: " << d << endl;
}

void print(string s)
{
	cout << "s: " << s << endl;
}

int main()
{
	// const�÷�
	int i = 0;
	const int ci = i;   //  ��ȷ
	i = 10;
	i = ci;     // ��ȷ

	// ָ�볣��
	int* p = &i;
	int* const pc = p;
	p = pc;

	// ��������
	int& i2 = i;
	//int& i3 = ci;   // ����
	const int& ci2 = ci;
	const int& ci3 = i;   // ��ȷ

	fun3(3.14);
	fun3(ci);

	// ָ������ָ��
	//int* p = &i;
	//int* p2 = &ci;   // ����
	const int* cp = &ci;
	const int* cp2 = &i;   // ��ȷ

	f(3.14);
	//f(10, 3.14);

	void print(int i);
	void print(string s);

	print(10);
	print(3.14);
	print("hello");

	cin.get();
}
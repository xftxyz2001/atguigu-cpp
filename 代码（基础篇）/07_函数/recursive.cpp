#include <iostream>

using namespace std;

// �õݹ�ķ�ʽ����׳˺���
int factorial(int n)
{
	// ��׼���
	if (n == 1)
		return 1;

	return factorial(n - 1) * n;
}

// �õݹ�ķ�ʽʵ��쳲��������еļ���
int fib(int n)
{
	// ��׼���
	if (n == 1 || n == 2)
		return 1;

	return fib(n - 1) + fib(n - 2);
}

int main()
{
	cout << "5! = " << factorial(5) << endl;

	cout << "fib(9) = " << fib(9) << endl;

	cin.get();
}
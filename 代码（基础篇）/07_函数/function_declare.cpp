#include <iostream>

using namespace std;

// ��������
//int square(int x);
int square(int);

int main()
{
	int n = 6;

	cout << n << "��ƽ��Ϊ��" << square(n) << endl;

	n = 7;
	cout << n << "��ƽ��Ϊ��" << square(n) << endl;

	cout << square(3.5) << endl;
	cout << square('a') << endl;

	//cout << square("hello") << endl;
	//cout << square(3, 5) << endl;

	cin.get();

}

// ����һ��ƽ������ y = x ^ 2
int square(int x)
{
	/*int y = x * x;
	return y;*/

	return x * x;
}
#include<iostream>
using namespace std;

int main()
{
	cout << "ѭ����ʼ...\n" << endl;

	for (int i = 1; i <= 10; i++)
	{
		cout << "Hello World" << endl;
		cout << "�����ǵ�" << i << "��ѭ��\n" << endl;
	}

	cout << "----------------------------" << endl;

	// ��Χforѭ��
	for (int num: {1,2,3,4,5,6,7})
	{
		cout << "��������������������ǣ�" << num << endl;
	}

	cout << "----------------------------" << endl;

	// Ƕ��forѭ��
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << "Hello World! i = " << i << ", j = " << j << endl;
		}
	}

	cout << "ѭ������...\n" << endl;

	cin.get();
}
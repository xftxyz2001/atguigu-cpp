#include<iostream>
using namespace std;

int main()
{
	cout << "ѭ����ʼ...\n" << endl;
	// ����ѭ������
	int i = 1;
	while (i <= 10)
	{
		cout << "Hello World" << endl;
		cout << "�����ǵ�" << i++ << "��ѭ��\n" << endl;
		//++i;
	}

	cout << "----------------------------" << endl;

	do
	{
		cout << "�����ǵ�����" << --i << "��ѭ��\n" << endl;
		cout << "GoodBye World" << endl;
	} while (i > 1);

	cout << "ѭ������...\n" << endl;

	cin.get();
}
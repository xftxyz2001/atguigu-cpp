#include<iostream>
using namespace std;

int main()
{
	// ��7��
	for (int num = 1; num <= 100; num++)
	{
		cout << "\t";

		// �����7�ı��������������а���7��������
		if ( num % 7 == 0 || num % 10 == 7 || num / 10 == 7 )
			continue;

		cout << num;

		// �����10�ı���������
		if (num % 10 == 0)
		{
			cout << endl << endl;
		}
	}

	cin.get();
}
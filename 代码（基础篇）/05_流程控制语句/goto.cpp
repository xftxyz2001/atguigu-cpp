#include<iostream>
using namespace std;

int main()
{
	int x = 0;

begin:

	cout << "����ʼ..." << endl;

	do {
		cout << " x = " << ++x << endl;
	} while (x < 10);

	if (x < 15)
	{
		cout << "�ص�ԭ�㣡" << endl;
		goto begin;
	}

	cout << "�������..." << endl;

	cin.get();

}
#include<iostream>
using namespace std;

int main()
{
	int i = 1;
	while (true)
	{
		cout << "Hello World" << endl;
		cout << "�����ǵ�" << i++ << "��ѭ��\n" << endl;
	
		// ����i��ֵ�ж��Ƿ���Ҫ�˳�ѭ��
		if (i > 10)
		{
			break;
		}
	}

	cin.get();
}
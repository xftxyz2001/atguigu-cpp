#include<iostream>

using namespace std;

int main()
{
	// �����û��ɼ�
	cout << "���������ĳɼ���" << endl;

	char score;

	cin >> score;

	switch (score)
	{
	case 'A':
		cout << "�ɼ����㣡" << endl;
		break;
	case 'B':
		cout << "�ɼ����ã�" << endl;
		break;
	case 'C':
		cout << "��ϲ�������ˣ�" << endl;
		break;
	case 'D':
		cout << "��ӭ�´�������" << endl;
		break;
	default:
		cout << "����ĳɼ����룡" << endl;
		break;
	}

	cin.get();
	cin.get();
}
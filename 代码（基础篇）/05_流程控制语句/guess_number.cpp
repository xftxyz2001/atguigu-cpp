#include<iostream>
using namespace std;

int main()
{
	cout << "==============������================" << endl;

	cout << "��Ϸ��������0~100����������5�λ���\n" << endl;

	// ���������
	srand(time(0));
	int target = rand() % 100;

	// ����ѭ�����Ͻ��в²�
	int n = 0;    // �µĴ���
	while (n < 5)
	{
		cout << "������0~100��������" << endl;

		int num;
		cin >> num;

		if (num == target)
		{
			cout << "��ϲ�㣬�¶��ˣ����������ǣ�" << num << endl;
			break;
		}
		else if (num  > target)
		{
			cout << "����̫���ˣ����ٲ�һ�飡" << endl;
		}
		else
		{
			cout << "����̫С�ˣ����ٲ�һ�飡" << endl;
		}

		++n;
	}

	if (n == 5)
	{
		cout << "�Ѿ��¹�5���ˣ�û�в��У���ӭ�´�������" << endl;
	}

	cin.get();
	cin.get();
}
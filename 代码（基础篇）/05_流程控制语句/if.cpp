#include<iostream>

using namespace std;

int main()
{
	// �����û����䣬�жϺ���ʾ��ӭ��Ϣ
	cout << "���������ķ��䣺" << endl;
	int age;
	cin >> age;

	// ����֧��˫��֧
	//if (age >= 18)
	//{
	//	cout << "��ӭ���������ˣ�" << endl;
	//}
	//else
	//{
	//	cout << "�����򲻻�ӭδ�����ˣ�" << endl;
	//}

	// ʹ���������������ʵ��
	//age >= 18 ? cout << "��ӭ���������ˣ�" << endl : cout << "�����򲻻�ӭδ�����ˣ�" << endl;
	//cout << (age >= 18 ? "��ӭ���������ˣ�" : "�����򲻻�ӭδ�����ˣ�") << endl;


	// Ƕ�׷�֧�����֧��
	//if (age >= 18)
	//{
	//	cout << "��ӭ���������ˣ�" << endl;
	//	if (age < 35)
	//	{
	//		cout << "���ͣ������ˣ�" << endl;
	//	}
	//}
	//else
	//{
	//	cout << "�����򲻻�ӭδ�����ˣ�" << endl;
	//	if (age >= 12)
	//	{
	//		cout << "���꣬�ú�ѧϰ��" << endl;
	//	}
	//	else
	//	{
	//		cout << "С���ѣ�������ԣ�" << endl;
	//	}
	//}

	// Ƕ�׷�֧��һ��д��
	if (age < 12)
	{
		cout << "С���ѣ�������ԣ�" << endl;
	}
	else if (age < 18) {
		cout << "���꣬�ú�ѧϰ��" << endl;
	}
	else if (age < 35) {
		cout << "���ͣ������ˣ�" << endl;
	}
	else if (age < 60) {
		cout << "���ͣ������ˣ�" << endl;
	}
	else{
		cout << "�ú���Ϣ�������ˣ�" << endl;
	}

	cin.get();
	cin.get();
}
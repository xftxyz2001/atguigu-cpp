#include<iostream>
#include<vector>
using namespace std;

int main()
{
	// Ĭ�ϳ�ʼ��
	vector<int> v1;
	// �б��ʼ��(������ʼ��)
	vector<char> v2 = {'a','b','c'};
	vector<char> v3{ 'a','b','c' };

	// ֱ�ӳ�ʼ��
	vector<short> v4(5);
	vector<long> v5(5, 100);

	// ����Ԫ��
	cout << v5[3] << endl;
	v5[3] = 25;
	cout << v5[3] << endl;
	//cout << v5[6] << endl;    // ����

	cout << "v5�ĳ���Ϊ��" << v5.size() << endl;

	// ��������Ԫ��
	for (int i = 0; i < v5.size(); i++)
	{
		cout << v5[i] << "\t";
	}

	cout << endl;

	// ���Ԫ��
	v5.push_back(69);

	for (int num : v5)
	{
		cout << num << "\t";
	}

	cout << endl;

	// ����������ӵ����Ԫ��
	for (int i = 10; i > 0; i--)
	{
		v1.push_back(i);
	}
	for (int num : v1)
	{
		cout << num << "\t";
	}

	cout << endl;

	cin.get();
}
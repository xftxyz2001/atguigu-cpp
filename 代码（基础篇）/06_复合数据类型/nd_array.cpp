#include<iostream>

using namespace std;

int main()
{
	// ��ʼ��
	int ia[3][4] = {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12}
	};

	int ia2[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};

	int ia3[3][4] = { 12 };

	int ia4[][4] = { 1,2,3,4,5,6,7 };

	// ����
	cout << "ia[1][2] = " << ia[1][2] << endl;
	ia[0][1] = 19;

	// ����
	// �����ά�����е�����������
	cout << "ia�ܴ�СΪ��" << sizeof(ia) << endl;
	cout << "iaÿһ�еĴ�СΪ��" << sizeof(ia[0]) << endl;
	cout << "iaÿһ��Ԫ�صĴ�СΪ��" << sizeof(ia[0][0]) << endl;

	int rowCnt = sizeof(ia) / sizeof(ia[0]);
	int colCnt = sizeof(ia[0]) / sizeof(ia[0][0]);

	for (int i = 0; i < rowCnt; i++)
	{
		for (int j = 0; j < colCnt; j++)
		{
			cout << ia[i][j] << "\t";
		}
		cout << endl;
	}

	for (auto& row : ia)
	{
		for (auto num : row)
		{
			cout << num << "\t";
		}
		cout << endl;
	}

	cin.get();
}
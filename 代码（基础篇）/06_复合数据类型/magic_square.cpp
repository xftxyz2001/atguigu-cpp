#include<iostream>

using namespace std;

int main()
{
	const int n = 3;
	int arr[n][n] = {
		{4, 9, 2},
		{3, 5, 7},
		{8, 1, 6}
	};

	// ����Ŀ���
	int target = (1 + n * n) * n / 2;

	// ʹ��bool���ͱ�־λ��ʾ�ж����
	bool isMagic = true;

	int sumDiag1 = 0, sumDiag2 = 0;

	// ����
	for (int i = 0; i < n; i++)
	{
		int sumRow = 0;
		int sumCol = 0;
		// ������i�к͵�i�е�ÿ��Ԫ�أ����е���
		for (int j = 0; j < n; j++)
		{
			sumRow += arr[i][j];
			sumCol += arr[j][i];
		}

		// �ж��Ƿ����target
		if (sumRow != target || sumCol != target)
		{
			isMagic = false;
			break;
		}

		sumDiag1 += arr[i][i];
		sumDiag2 += arr[i][n - 1 - i];
	}
	// �ж��Ƿ����target
	if (sumDiag1 != target  || sumDiag2 != target)
	{
		isMagic = false;
	}

	// ����ж����
	cout << "�����ľ���arr" << (isMagic ? "��" : "����") << n << "�׻÷���" << endl;

	cin.get();

}
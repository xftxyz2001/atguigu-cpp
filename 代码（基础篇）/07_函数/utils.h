#pragma once
#include<iostream>
using namespace std;

// �����ͺ���
int cubeSum(int x, int y)
{
	return pow(x, 3) + pow(y, 3);
}

// �׳˺���
int factorial(int n)
{
	int result = 1;
	for (int i = 1; i <= n; i++)
	{
		result *= i;
	}

	return result;
}


// ��ʾ�������ö��ٴεĺ���
int callCount()
{
	static int count = 0;
	++count;

	cout << "�ұ�������" << count << "�Σ�" << endl;

	return count;
}

string copyStr(string str, int n);
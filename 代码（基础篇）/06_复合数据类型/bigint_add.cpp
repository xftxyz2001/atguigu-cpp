#include<iostream>

using namespace std;

int main()
{
	string num1 = "32535943020935527435432875";
	string num2 = "9323298429842985843509";

	string result;

	// ��������ָ�룬ָ�������ĸ�λ
	int p1 = num1.size() - 1;
	int p2 = num2.size() - 1;

	// ��һ���������浱ǰ��λ
	int carry = 0;

	// ѭ����������������������
	while (p1 >= 0 || p2 >= 0 || carry != 0)
	{
		// �ж������Ƿ������ɣ���������0
		int x = (p1 >= 0) ? (num1[p1] - '0') : 0;
		int y = (p2 >= 0) ? (num2[p2] - '0') : 0;

		int sum = x + y + carry;
		carry = sum / 10;    // �͵�ʮλ������carry��
		result += (sum % 10 + '0');   // �͵ĸ�λת�����ַ����浽�����

		// ָ����ǰ�ƶ���������һλ
		--p1;
		--p2;
	}

	// �Խ�����з�ת
	int i = 0, j = result.size() - 1;
	while (i < j)
	{
		char temp = result[i];
		result[i] = result[j];
		result[j] = temp;

		++i;
		--j;
	}


	cout << num1 << " + " << num2 << " = " << result;

	cin.get();

}
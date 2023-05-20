#include<iostream>

using namespace std;

int main()
{
	// 1. ���������
	cout << "1 + 2 = " << 1 + 2 << endl;
	cout << "1 + 2 �C 3 �� 4 = " << 1 + 2 - 3 * 4 << endl;

	int a = 20, b = 6;
	cout << "a + b = " << a + b << endl;
	cout << "a + 1 = " << a + 1 << endl;

	cout << "a / b = " << a / b << endl;
	short a2 = 3;
	long long b2 = 23435;
	cout << "a2 * b2 = " << a2 * b2 << endl;
	cout << "b2 / b = " << b2 / b << endl;

	float a3 = 20;
	cout << "a3 / b = " << a3 / b << endl;

	cout << "a % b = " << a % b << endl;
	cout << "-a % b = " << -a % b << endl;
	//cout << "a3 % b = " << a3 % b << endl;

	// 2. ��ֵ�����
	a = 1;
	//1 = a;    // ����1���ǿ��޸ĵ���ֵ
	a = b + 5;
	//b + 5 = a;   // ����
	const int c = 10;
	//c = b;    // ����

	a = { 10 };
	int arr[] = {1,2,3,4,5};

	a = b = 5;

	// ���ϸ�ֵ�����
	int sum = a;
	//sum = sum + b;
	//sum = sum + c;
	sum += b;
	sum += c;

	cout << "a + b + c = " << sum << endl;

	// �����ݼ������
	cout << "++a = " << ++a << endl;

	int i = 0, j;
	j = ++i;
	//j = i++;
	cout << "i = " << i << endl;
	cout << "j = " << j << endl;

	cout << "------------------------------" << endl;

	// 3. ��ϵ���߼������
	// ��ϵ
	cout << "1 < 2 :" << (1 < 2) << endl;
	cout << "a < b :" << (a < b) << endl;
	cout << " 10 == 4 + 6 :" << (10 == 4 + 6) << endl;
	cout << " (10 == 4) + 6 : " << ((10 == 4) + 6) << endl;

	// �߼�
	cout << "1 < 2 && 3 >= 5 : " << (1 < 2 && 3 >= 5) << endl;
	cout << "!(1 < 2 || 3 >= 5) : " << !(1 < 2 || 3 >= 5) << endl;

	// ��·��ֵ
	i = 0;
	1 < 2 && ++i;
	cout << "i = " << i << endl;

	// ����
	cout << ((1 > 2 && ++i) ? "true" : "false") << endl;

	// 4. λ�����
	unsigned char bits = 0xb5;
	cout << hex;
	cout << "bits����2λ��" << (bits << 2) << endl;
	cout << "bits����8λ��" << (bits << 8) << endl;
	cout << "bits����31λ��" << (bits << 31) << endl;
	cout << "bits����3λ��" << (bits >> 3) << endl;

	cout << dec;
	cout << (200 << 3) << endl;
	cout << (-100 >> 2) << endl;

	// λ�߼�����
	cout << (~5) << endl;
	cout << (5 & 12) << endl;
	cout << (5 | 12) << endl;
	cout << (5 ^ 12) << endl;

	// ��������һ�������ҳ�ֻ����һ�ε��Ǹ���
	int i1 = 5, i2 = 12, i3 = 12, i4 = 9, i5 = 5;
	cout << "ֻ����һ�ε��Ǹ���Ϊ��" << (i1 ^ i2 ^ i3 ^ i4 ^ i5) << endl;

	// 5. ����ת��
	// ��ʽ����ת��
	short s = 15.2 + 20;
	cout << "s = " << s << endl;
	cout << "15.2 + 20 = " << (15.2 + 20) << endl;
	cout << "s ����Ϊ�� " << sizeof s << endl;
	cout << "15.2 + 20 ����Ϊ�� " << sizeof(15.2 + 20) << endl;

	// ��ϵ�����е�����ת��
	a = 1;
	cout << ((0 < a < 100) ? "true" : "false") << endl;
	cout << ((0 < a && a < 100 ) ? "true" : "false") << endl;
	s = 32767;
	cout << " s + 1 = " << s + 1 << endl;
	s++;
	cout << " s = " << s << endl;

	// ǿ������ת��
	int total = 20, num = 6;
	double avg = total / num;
	cout << "avg = " << avg << endl;

	// C���Է��
	cout << "avg = " << (double)total / num << endl;
	// C++�������÷��
	cout << "avg = " << double(total) / num << endl;
	// C++ǿ������ת�������
	cout << "avg = " << static_cast<double>(total) / num << endl;

	cin.get();
}
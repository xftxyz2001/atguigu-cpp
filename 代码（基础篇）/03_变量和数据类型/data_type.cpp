#include<iostream>
using namespace std;

int main()
{
	// ����
	short a = -20;
	cout << "a = " << a << endl;
	cout << "a�ĳ���Ϊ��" << sizeof a << endl;

	int a2 = 20;
	cout << "a2 = " << a2 << endl;
	cout << "a2�ĳ���Ϊ��" << sizeof a2 << endl;

	long a3 = 20;
	cout << "a3 = " << a3 << endl;
	cout << "a3�ĳ���Ϊ��" << sizeof a3 << endl;

	long long a4 = 20;
	cout << "a4 = " << a4 << endl;
	cout << "a4�ĳ���Ϊ��" << sizeof a4 << endl;

	// �޷�������
	unsigned short s1 = -1;
	cout << "s1 = " << s1 << endl;

	// �ַ�����
	char c = 65;
	cout << "c = " << c << endl;
	char c2 = c + 1;
	cout << "c + 1 = " << c2 << endl;

	// ��������
	bool b1 = true;
	cout << "b1 = " << b1 << endl;
	cout << "b1ռ�ݳ���Ϊ�� " << sizeof b1 << endl;

	// ��������
	float f = 2.5;
	double d = 3.79E-23;

	cout << "f = " << f << endl;
	cout << "d = " << d << endl;

	// ����ֵ����
	// ����
	30;
	036L;
	0x1ELL;

	// ��������
	3.14f;
	1.25L;

	// �ַ�����
	',';
	'A';
	'2';
	"ABCDE";
	'\'';

	// ת���ַ�
	char tc = '\n';
	cout << "tc = " << tc << endl;

	cout << "Hello World!\t\"Hello C++!\"\n \?" << endl;

	// ��ֵʱ���Զ�����ת��
	// 1. ����ֵ����bool����
	bool btrans = 25;
	cout << "btrans = " << btrans << endl;

	// 2. ��bool���͵�ֵ������������
	short strans = false;
	cout << "strans = " << strans << endl;

	// 3. ��������ֵ����������
	int itrans = 3.94;
	cout << "itrans = " << itrans << endl;

	// 4. ����ֵ��ֵ����������
	float ftrans = 3;
	cout << "ftrans = " << ftrans << endl;

	// 5. ��ֵ���������ͷ�Χ	
	unsigned short ustrans = 65536;
	cout << "ustrans = " << ustrans << endl;
	strans = 32768;
	cout << "strans = " << strans << endl;

	cin.get();
}
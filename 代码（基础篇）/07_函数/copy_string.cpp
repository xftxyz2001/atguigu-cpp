#include<string>
using namespace std;

// �����ַ���
string copyStr(string str, int n)
{
	string result;

	while (n > 0)
	{
		result += str;
		--n;
	}

	return result;
}
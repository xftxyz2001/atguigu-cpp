#include<iostream>
using namespace std;

int main()
{
	// �������߷��� (x^2 + y^2 - a)^3 - x^2 * y^3 = 0
	double a = 0.8;
	// �����ͼ�߽�
	double bound = 1.3 * sqrt(a);

	// x��y����仯����
	double step = 0.05;

	// ��άɨ�����е㣬�������ɨ��
	for (double y = bound; y >= -bound; y -= step)
	{
		// �ڲ����ɨ��
		for (double x = -bound; x <= bound; x += 0.5 * step)
		{
			// �������߷��̣�����ÿ�����Ƿ���������
			double result = pow((pow(x, 2) + pow(y, 2) - a), 3) - pow(x, 2) * pow(y, 3);
			if (result <= 0)
				cout << "*";
			else
				cout << " ";
		}
		cout << endl;
	}

	cin.get();
}
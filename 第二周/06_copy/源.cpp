#include <iostream>
using namespace std;
class Sample {
public:
	int v;
	// �ڴ˴�������Ĵ���
	Sample() {
		cout << "Ĭ�Ϲ���" << endl;
	}
	Sample(int i) {
		cout << "����ת������" << endl;
		v = i;
	}
	Sample(const Sample& S) {
		v = S.v + 2;
		cout << "���ƹ���" << endl;
	}
	/*Sample &operator=(const Sample &S) {
		cout << "=���ع���" << endl;
		return *this;
	}*/
};
void PrintAndDouble(Sample o)
{
	cout << o.v;
	cout << endl;
}
int main()
{
	Sample a(5);	//����ת������
	Sample b = a;  //���ƹ���
	PrintAndDouble(b);//����ʱ����һ�θ��ƹ���
	Sample c = 20;  //����ת������
	PrintAndDouble(c);
	Sample d;
	d = a;
	cout << d.v;
	return 0;
	//9 22 5
}
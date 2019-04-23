#include <iostream>
using namespace std;
class Sample {
public:
	int v;
	// 在此处补充你的代码
	Sample() {
		cout << "默认构造" << endl;
	}
	Sample(int i) {
		cout << "类型转换构造" << endl;
		v = i;
	}
	Sample(const Sample& S) {
		v = S.v + 2;
		cout << "复制构造" << endl;
	}
	/*Sample &operator=(const Sample &S) {
		cout << "=重载构造" << endl;
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
	Sample a(5);	//类型转换构造
	Sample b = a;  //复制构造
	PrintAndDouble(b);//传入时还有一次复制构造
	Sample c = 20;  //类型转换构造
	PrintAndDouble(c);
	Sample d;
	d = a;
	cout << d.v;
	return 0;
	//9 22 5
}
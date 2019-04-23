#include <iostream>
#include <string>
#include <cstdio>
#include <cstring>
#include <sstream>
#include <cstdlib>
using namespace std;

class Student {
private:
	int age;
	int ID = 0;
	int score = 0;
	double fina_score = 0;
	string name;
public:
	void input(void) {
		int i = 0;
		int temp_sorce;
		char word;
		char* name_word = new char[21];
		//get name
		while (true) {
			scanf_s("%c", &word, 1);
			if (word == ',') break;
			else name_word[i++] = word;
		}
		name_word[i] = '\0';
		name = name_word;
		//get age
		scanf_s("%d", &age);
		scanf_s("%c", &word, 1);
		//get number
		while (true) {
			scanf_s("%c", &word, 1);
			if (word == ',') break;
			else ID = ID * 10 + (word - '0');
		}
		//get sorce
		for (i = 0;i < 4;i++) {
			scanf_s("%d", &temp_sorce);
			score += temp_sorce;
			if (i < 3) scanf_s("%c", &word, 1);
		}
	}
	void calculate(void) {
		fina_score = (double)score / 4;
	}
	void output(void) {
		cout << name << "," << age << "," << ID << "," << fina_score;

	}
}
int main() {
	Student student;        // 定义类的对象
	student.input();        // 输入数据
	student.calculate();    // 计算平均成绩
	student.output();       // 输出数据
}
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
#include <string>

int main() {
	//string str1 = "hello C++";
	//cout << "请输入字符串：";
	//cin >> str1; // 只能输入一个单词，遇到空格就结束
	//cout << "str1 = " << str1 << endl;

	bool b = false;
	cout << "请输入一个布尔值：";
	cin >> b; //非零为1
	cout << "b = " << b << endl;

	system("pause");
	return 0;
}
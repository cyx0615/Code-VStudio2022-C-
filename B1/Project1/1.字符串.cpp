#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
#include <string>

int main() {
	char str1[] = "hello C";
	cout << str1 << endl;
	//string是C++提供的字符串类型，使用前需要包含头文件<string>
	string str2 = "hello C++";
	cout << str2 << endl;
	system("pause");
	return 0;
}
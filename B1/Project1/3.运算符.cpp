#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main() {
	/* C/C++ 中只要有一个操作数是浮点数
	就会触发算术转换，将整数2提升为浮点数
	执行浮点运算 */
	cout << 5.2 / 2 << endl;
	//取余运算的被取余数不能为0，且只能用于整数
	system("pause");
	return 0;
}
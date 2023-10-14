#include <iostream>
using namespace std;
int main()
{
	system("chcp 1251 > nul");
	int x;
	int result;
	cout << "Введіть число Х \n";
	cin >> x;
	result = 3 * (x * x * x) - 2 * (x * x) + 3 * x - 1;
	cout << "Отримане число: " << result;
	return 0;
}

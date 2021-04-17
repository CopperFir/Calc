#include <iostream>
#include "calc.h"
using namespace std;

int main() {
	cout << choose_operator << endl;
	cin >> op;
	cout << choose_number << endl;
	cin >> num1 >> num2;
	cout << num1 << op << num2 << "=";
	switch (op) {
	case '+':
		cout << num1 + num2 << endl;
		break;
	case '-':
		cout << num1 - num2 << endl;
		break;
	case '*':
		cout << num1 * num2 << endl;
		break;
	case '/':
		cout << num1 / num2 << endl;
		break;
	default:
		cout << operator_error << endl;
		break;
	}
	system("pause");
	return 0;
}

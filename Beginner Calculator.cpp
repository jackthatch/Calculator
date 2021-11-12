#include <iostream>
using namespace std;



double calc(double numOne, double numTwo, char op) {
	double result;
	switch (op) {
	case '+':
		result = numOne + numTwo;
		break;
	case '-':
		result = numOne - numTwo;
		break;
	case '*':
		result = numOne * numTwo;
		break;
	case '/':
		result = numOne / numTwo;
		break;
	default:
		result = 0;
	} 
	return result;
}

int main()
{
	double numOne, numTwo;
	char op;
	cout << "Please select your first digit" << endl;
	cin >> numOne;
	cout << "Please select your operand (+, -, *, or / )" << endl;
	cin >> op;
	cout << "Please select your second digit" << endl;
	cin >> numTwo;
	
	cout << calc(numOne, numTwo, op);
	return 0;
}
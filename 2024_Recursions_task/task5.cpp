#include <iostream>
using namespace std;


double power(double x, int n) {
	if (x == 0 && n <= 0) {
		cout << "Invalid values. Canceling the proccess.\n";
		return 0;
	}
	if (n == 1) {
		return x;
	}
	if (n > 0) {
		return power(x, n - 1) * x;
	} 
	else if (n == 0) {
		return 1;
	}
	else {
		return (1 / (power(x, n*-1 - 1) * x));
	}
}

void task5() {

	double x;
	int n;
	cout << "\tTask 5:\nEnter the number you want to power: ";
	cin >> x;
	cout << "Enter the power for your number: ";
	cin >> n;

	cout << x << " to the power of " << n << " equals " << power(x, n) << endl;

	return;
}
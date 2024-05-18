#include <iostream>
using namespace std;


int CalculateF(int n) {
	if (n == 1) 
		return 0;
	if (n == 2)
		return 1;
	return CalculateF(n - 2) + CalculateF(n - 1);
}

void task3() {
	int n;
	cout << "\tTask 3:\nWhat number in Fibonacci sequence do you want to get?\n#1 is 0, #2 is 1\nYour number is #";
	cin >> n;

	cout << "Number #" << n << " is " << CalculateF(n) << endl;

	return;
}
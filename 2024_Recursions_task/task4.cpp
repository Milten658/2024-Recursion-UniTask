#include <iostream>
using namespace std;

int ways(int n) {

	if (n == 0 || n == 1) {
		return 1;
	}
	return ways(n - 2) + ways(n - 1);
}

void task4() {
	//The answer to this problem lies in nature of Fibonacci sequence
	int n;
	cout << "\tTask 4\nHow many steps does it take to get to the top? (0-45) - ";
	cin >> n;

	cout << "There are " << ways(n) << " unique ways to go. Pick your poison and good luck)\n";

	return;
}

#include <iostream>
#include <string>
#include "task2.h"
#include "task3.h"
#include "task4.h"
#include "task5.h"

using namespace std;


void Print_backwards(string x) {
	char last = x.at(x.length() - 1);
	cout << last;
	if (x.length() == 1) {
		return;
	}
	x.pop_back();
	Print_backwards(x);
}


void task1() {
	string to_reverse;
	cout << "\tTask 1:\nWrite a word or a phrase that will be written in reverse:\n";
	getline(cin, to_reverse);
	Print_backwards(to_reverse);
	cout << endl;
}

int main() {
	
	task1();
	cout << endl;
	task2();
	cout << endl;
	task3();
	cout << endl;
	task4();
	cout << endl;
	task5();

	int end;
	cout << "\nAll five tasks are succesfully complete. Thank you for elaboration!\nRate your experience (1-10) to exit: ";
	cin >> end;
	
	return 0;
}
#include <iostream>
#include "Header2.h"
#include <fstream>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	int* a = new int[12];
	for (int i = 0; i < 12; i++) {
		a[i] = rand() % 10 + 1;
		cout << a[i] << ' ';
	}
	cout << endl;
	s(a);
	for (int i = 0; i < 12; i++) {
		cout << a[i] << ' ';
	}

}

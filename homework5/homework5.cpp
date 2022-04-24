#include <iostream>
#include "Header.h"
#include <fstream>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	double* a;
	int n, q = 0;
	while (q != 1) {
		cout << "Введите кол-во членов массива:";
		cin >> n;
		o(a, n);
		z(a, n);
		v(a, n);
		d(a);
		cout << endl;
		cout << "Если хотите выйти введите 1,если нет любое другое число" << endl;
		cin >> q;
	}
}

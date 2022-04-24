#include "Header.h"

void o(double*& a, int n)
{
	a = new double[n];
}

void z(double*& a, int n)
{
	for (int i = 0; i < n; i++) {
		a[i] = rand() % 10 + 1;
	}
}

void v(double*& a, int n)
{
	for (int i = 0; i < n; i++) {
		cout << a[i] << ' ';
	}
}

void d(double*& a)
{
	delete[] a;
}


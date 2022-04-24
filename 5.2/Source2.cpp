#include "Header2.h"

void s(int*& a)
{
	int arr[12] = { 0,0,0,0,0,0,0,0,0,0,0,0 };
	for (int i = 0; i < 12; i++) {
		for (int j = i + 1; j < 12; j++) {
			if (a[i] % 2 == 0 && a[j] % 2 != 0 && a[i] != 0 && a[j] != 0) {
				//swap(a[i], a[j]);
				arr[i] = a[j]; a[j] = 0;
				arr[j] = a[i]; a[i] = 0;
				break;
			}
			else if (a[i] % 2 != 0 && a[j] % 2 == 0 && a[i] != 0 && a[j] != 0) {
				//swap(a[i], a[j]);
				arr[i] = a[j]; a[j] = 0;
				arr[j] = a[i]; a[i] = 0;
				break;
			}
		}
	}
	for (int i = 0; i < 12; i++) {
		if (arr[i] != 0)
			a[i] = arr[i];
	}
}

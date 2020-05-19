#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>

int main(void) {
	int a[10] = { 5,4,3,2,1,5,3,2,1,4 };
	int i, maxValue = INT_MIN;
	for (i = 0; i < 10; i++) {
		if (maxValue < a[i]) maxValue = a[i];
	}
	printf("%d\n", maxValue);
	system("pause");
	return 0;
}
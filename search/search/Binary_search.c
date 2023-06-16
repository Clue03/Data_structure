#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 5

int main() {
	int a[5], i, low = 0, high = MAX - 1, mid, data, flag = 0;

	for (i = 0; i < 5; i++)
		a[i] = (i + 1) * 10;

	printf("Search data -> ");
	scanf("%d", &data);

	while (flag == 0 && low <= high) {
		mid = (low + high) / 2;

		if (data == a[mid])
			flag = 1;
		else if (data > a[mid])
			low = mid + 1;
		else
			high = mid - 1;
	}

	if (flag == 1) {
		printf("Data found -> %d, Index -> %d \n", a[mid], mid);
	}
	else
		printf("Data Not found...\n");
}
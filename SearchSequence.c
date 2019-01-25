#include <stdio.h>

int SearchSequence(int a[], int value, int n) {
	for (int i=0; i<n; ++i) {
		if (a[i] == value) {
			return i;
		}
	}
	return -1;
}

int main () {
	int a[] = {30, 5, 3, 26, 0, 17, 15, 20, 2, 100, 4, 9, 87};
	int index = SearchSequence(a, 2, sizeof(a)/sizeof(int));
	for (int i=0; i<sizeof(a)/sizeof(int); ++i) {
		printf("%d ", a[i]);
	}
	printf("\n");
	printf("找到2在数组中的位置: %d\n", index);

	return 0;
}

#include "functions.h"

void inplace_swp(int *x, int *y)
{
	*y = *x ^ *y;
	*x = *x ^ *y;
	*y = *x ^ *y;
}

void reverse_array(int arr[], size_t len)
{
	int first, last;
	for (first = 0, last = len-1;
		 first <= last;
		 first++, last--) {
		if (first < last)
			inplace_swp(&arr[first], &arr[last]);
	}
}

void print_array(int arr[], size_t len)
{
	for (int i = 0; i < len; i++)
		printf(" %d", arr[i]);
	printf("\n");
}
int main(void)
{
	int array[] = {0, 1, 2, 3, 4};

	print_array(array, SIZE(array));
	reverse_array(array, SIZE(array));
	print_array(array, SIZE(array));

	return 0;
}


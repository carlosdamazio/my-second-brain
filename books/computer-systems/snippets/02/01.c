#include <stdio.h>


int main(void)
{
	int x = 255;
	int *ptr = &x;

	show_int(0);
	show_int(255);
	show_float(20.5);
	show_pointer(ptr);
}

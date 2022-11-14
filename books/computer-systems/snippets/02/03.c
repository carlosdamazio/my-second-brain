#include "functions.h"

int fun1(unsigned word)
{
	return (int) ((word << 24) >> 24);
}

int fun2(unsigned word)
{
	return ((int) word << 24) >> 24;
}

int main(void)
{
	show_int(fun1(0x00000076));
	show_int(fun2(0x00000076));

	show_int(fun1(0x87654321));
	show_int(fun2(0x87654321));

	show_int(fun1(0x000000C9));
	show_int(fun2(0x000000C9));

	show_int(fun1(0xEDCBA987));
	show_int(fun2(0xEDCBA987));
}

#include <iostream>

using namespace std;

double square(int x)
{
	return x * x;
}

int main(void)
{
	int x = 16;

	cout << "Square of " << x << " = " << square(x) << "\n";
	return 0;
}

#include <iostream>

struct Vector {
	double *elem;
	int sz;
};

void init_vector(Vector& v, unsigned int s)
{
	v.elem = new double[s];
	v.sz = s;
}

double sum(int s)
{
	Vector v;
	init_vector(v, s);

	for (int i=0; i!=s; ++i)
		std::cin >> v.elem[i];

	double sum = 0;
	for (int i=0; i!=s; ++i)
		sum += v.elem[i];
	return sum;
}

int main(void)
{
	std::cout << "Sum of array = " << sum(3) << "\n";
	return 0;
}

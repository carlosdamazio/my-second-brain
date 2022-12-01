#include <iostream>

class Vector {
public:
	Vector(int s) { elem = new double[s]; sz = s; }
	double& operator[](int i) { return elem[i]; }
	int size() {return sz;}

private:
	double *elem;
	int sz;
};

double sum(int s)
{
	Vector v(s);
	for (int i=0; i!=v.size(); ++i)
		std::cin >> v[i];

	double sum = 0;
	for (int i=0; i!=v.size(); ++i)
		sum += v[i];
	return sum;
}

int main(void)
{
	std::cout << "Sum of array: " << sum(3) << "\n";
	return 0;
}

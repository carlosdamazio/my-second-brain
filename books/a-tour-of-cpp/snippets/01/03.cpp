#include <iostream>

bool is_valid_ptr(int *ptr)
{
	if (ptr == nullptr)
		return false;
	return true;
}

int main(void)
{
	int x = 42;
	int *x_ptr = &x;

	// null pointer is initialized
	// unitialized pointers are NOT nullptr
	int *y_ptr = nullptr;

	if (!is_valid_ptr(y_ptr))
		std::cout << "y pointer is null\n";

	if (is_valid_ptr(x_ptr))
		std::cout << "x pointer is valid, and it points to: " << *x_ptr << "\n";

	return 0;
}

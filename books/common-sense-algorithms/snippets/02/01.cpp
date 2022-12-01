#include <iostream>
#include <vector>

using namespace std;

int* linear_search(vector<int>& v, int val)
{
	for (int i=0; i<v.size(); i++) {
		if (v[i] == val)
			return new int(i);
		else if (v[i] > val)
			break;
	}

	return nullptr;
}

int main(void)
{
	vector<int> v = {1, 2, 3, 4, 6, 10};
}

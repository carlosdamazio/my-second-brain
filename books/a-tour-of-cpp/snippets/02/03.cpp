#include <iostream>

using namespace std;

enum Traffic_light {green, yellow, red};

Traffic_light& operator++(Traffic_light& t)
{
	switch(t) {
	case green: return t=yellow;
	case yellow: return t=red;
	case red: return t=green;
	}
}

void message(Traffic_light& t)
{
	switch(t) {
	case green: cout << "Green, you can go!\n"; break;
	case yellow: cout << "Yellow, prepare to stop\n"; break;
	case red: cout << "Red, stop right there!\n"; break;
	}
}

int main(void)
{
	Traffic_light semaphore = green;
	message(semaphore);

	++semaphore;
	message(semaphore);

	++semaphore;
	message(semaphore);

	return 0;
}



#include <iostream> 
using namespace std;

class Queues {
	int FRONT, REAR, max = 3;
	int queue_array[5];

public:
	Queues() {
		FRONT = -1;
		REAR = -1;
	}

	void instert() {
		int num;
		cout << "Enter a Number: ";
		cin >> num;
		cout << endl;
	}
};
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

		// Cek Apakah antrian penuh
		if ((FRONT == 0 && REAR == max - 1) || (FRONT == REAR + 1)) {
			cout << "\nQueue overflow\n";
			return;
		}

		//cek apakah antrian kosong
		if (FRONT == -1) {
			FRONT = 0;
			REAR = 0;
		}
		
	}
};
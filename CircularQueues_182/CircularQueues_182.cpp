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
		else {
			//jika REAR berada di posisi terakhir array, kembali ke awal array
			if (REAR == max - 1)
				REAR = 0;
			else
				REAR = REAR + 1;
		}
		queue_array[REAR] = num;
	}

	void remove() {
		// cek apakah antrian kosong
		if (FRONT == -1) {
			cout << "Queue underflow\n";
			return;
		}
		cout << "\nThe element deleted from queue is: " << queue_array[FRONT] << "\n";

		//cek jika antrian memiliki satu element
		if (FRONT == REAR) {
			FRONT = -1;
			REAR = -1;
		}
		else {
			//jika element yang dihapus berada di posisi terakhir array, kembali ke awal array
			if (FRONT == max - 1)
				FRONT = 0;
			else
				FRONT = FRONT + 1;
		}
	}
};
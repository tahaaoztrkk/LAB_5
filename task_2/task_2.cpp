#include <iostream>
#include <fstream>
using namespace std;

class ArrayOperations {
public:
	int arr[5];

	int calculateSum() {
		int sum = 0;
		for (int i = 0; i < 5; i++) {
			sum += arr[i];

		}
		return sum;
	}

};

int main() {
	ArrayOperations array;
	array.arr[0] = 1;
	array.arr[1] = 2;
	array.arr[2] = 3;
	array.arr[3] = 4;
	array.arr[4] = 5;
	cout << "sum of array: " << array.calculateSum();

}
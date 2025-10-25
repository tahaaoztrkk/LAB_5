#include <iostream>
#include <fstream>
using namespace std;

class Rectangle {
public:
	double width = 20;
	double height = 5;

	int calculateArea() {

		double area = width * height;
		return area;
	}
};
int main() {
	Rectangle rectangle1;

	cout << "area is: " << rectangle1.calculateArea();
}
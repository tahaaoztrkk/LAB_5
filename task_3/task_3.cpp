#include <iostream>
#include <fstream>
using namespace std;

class Circle {
public:
	double radius;

	double calculateArea() {
		int pi = 3.14;
		double area = pi * radius * radius;
		return area;
	}

};

int main() {
	Circle circle1;
	circle1.radius = 5.2;
	cout << "circle area is: " << circle1.calculateArea();
}
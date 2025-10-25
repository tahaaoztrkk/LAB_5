#include <iostream>
#include <fstream>
using namespace std;

class Student {
public:
	string name;
	double grades[3];
	double average;

	double calculateAverage() {
		double sum = 0;
		for (int i = 0; i < 3; i++) {
			sum += grades[i];
		}
		average = sum / 3;
	}

};

int main() {
	Student s1;
	s1.name = "Taha";
	s1.grades[0] = 67;
	s1.grades[1] = 85;
	s1.grades[2] = 98;

	cout << "Student name is: " << s1.name << endl << "average grade is: " << s1.calculateAverage();
}
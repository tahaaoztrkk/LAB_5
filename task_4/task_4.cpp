#include <iostream>
#include <fstream>
using namespace std;

class Temperature {
public:
	double celcius;

	int toFahrenheit() {
		double F = (celcius * 9 / 5) + 32;
		return F;
	}

	int toKelvin() {
		double K = celcius + 273.15;
		return K;
	}
};

int main() {
	Temperature temp;
	temp.celcius = 27.5;
	cout << "fahrenheit is: " << temp.toFahrenheit() << endl;
	cout << "kelvin is: " << temp.toKelvin();
}
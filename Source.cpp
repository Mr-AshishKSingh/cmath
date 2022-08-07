#include <iostream>
using namespace std;
#include <string>
#include <cmath>

int main() {

	int x = 90, y = 15, z = 2;
	std::cout << std::max(x,y) << "\n";
	std::cout << std::min(x, y) << "\n";
	std::cout << "abs" << abs(x) << "\n";
	std::cout << "acos" << acos(x) << "\n";
	cout << "asin" << asin(x) << "\n";
	cout << "atan" << atan(x) << "\n";
	cout << "cbrt" << cbrt(x) << endl;
	cout << "ceil" << ceil(x) << endl;
	cout << "cos" << cos(x) << endl;
	cout << "cosh" << cosh(x) << endl;
	cout << "exp" << exp(x) << endl;
	cout << "expm1" << expm1(x) << endl;
	cout << "fabs" << fabs(x) << endl;
	cout << "fdim " << fdim(x, y) << endl;
	cout << "floor " << floor(x) << endl;
	cout << "hypot" << hypot(x, y) << endl;
	cout << "fma" << fma(x, y, z) << endl;
	cout << "fmax" << fmax(x, y) << endl;
	cout << "fmin " << fmin(x, y) << endl;
	cout << "fmod" << fmod(x, y) << endl;
	cout << "pow " << pow(x, y) << endl;
	cout << "sin" << sin(x) << endl;
	cout << "sinh" << sinh(x) << endl;
	cout << "tan " << tan(x) << endl;
	cout << "tanh " << tanh(x) << endl;

	return 0;

}
#include <iostream>
#include <cmath>
#include <windows.h>
#include <string>
using namespace std;




int main()
{
	
	cout << "Today we learn the Power Function." << endl << endl;
	float a, b, c;

	cout << "Please enter the Base: " << endl;
	cin >> a;

	cout << "Please input the exponent (to the power of): " << endl;
	cin >> b;

	c = pow(a, b);

	cout << a << " to the power of " << b << " equates to: " << c << endl;
	Sleep(4000);
	
}

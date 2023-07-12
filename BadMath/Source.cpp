#include <iostream>
#include <iomanip>
using namespace std;

float average(int i1, int i2, int i3)
{
	return (i1 + i2 + i3) / 3.0f;
}

int main()
{
	int n1 =0 , n2 = 0, n3 = 0;
	cout << "Welcome to the The Three Number Averaging Program." << endl;
	cout << "This program calculates the average of three numbers." << endl;
	cout << "Enter the First number: "; 
	cin >> n1;
	cout << "Enter the Second number: "; 
	cin >> n2;
	cout << "Enter the Third number: "; 
	cin >> n3;

	float a = average(n1, n2, n3);

	cout << setprecision(1) << fixed << "The average is " << a << "." << endl;
	cout << "Thank you for using The Three Number Averaging Program." << endl;

	return 0;
}
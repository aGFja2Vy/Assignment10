/* 
 * Name: Payton Erickson
 * Student ID: 0545468
 * Date: June 30, 2018
 * Assignment #: Assignment10
 * Assignment Description: Modify assignment 9 but now using functions
 */

#include <iostream>

using namespace std;

double C2F(double value);
double K2F(double value);
double N2F(double value);


int main()
{
	char function;
	double f, value;

	cout << "This temperature conversion program converts other temperature types to Fahrenheit" << endl;
	cout << "The temperature types are: " << endl;
	cout << "C - Celcius" << endl;
	cout << "K - Kelvin " << endl;
	cout << "N - Newton " << endl;
	cout << "X - eXit " << endl << endl;
	cout << "To use the converter you must input a value and one of the temparture types." << endl;
	cout << "For example 32 C converts 32 degress from Celsius to Fahrenheit" << endl << endl;
	
	cout << "Please enter a value and it's type to be converted " << endl;
	cin >> value >> function;

	function = toupper(function);
	while(function != 'X')
	{
		switch(function)
		{
		case 'C':
                        f = C2F(value);
			cout << value << "C is " << f << " in Fahrenheit" << endl;
			break;
		case 'K':
			f = K2F(value);
			cout << value << "K is " << f << " in Fahrenheit" << endl;
			break;
		case 'N':
			f = N2F(value);
			cout << value << "N is " << f << "in Fahrenheit" << endl;
			break;
		default:
			cout << "Correct choices are C, K, N, X" << endl;
		
		}
		cout << "Please enter a value and it's type to be converted " << endl;
		cin >> value >> function;
		function = toupper(function);

	}
	return 0;
}

double C2F(double value)
{
    double f = value * 9 / 5 + 32;
    return f;
}

double K2F(double value)
{
    double f =(value - 273.15) * 1.8 + 32.0;
    return f;
}

double N2F(double value)
{
    double f = value * 60 / 11 + 32;
    return f;
}
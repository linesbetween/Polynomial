/*CIT237 Polynomial
/*Hanfei XU
*/

#include <iostream>
#include <string>
#include "Term.h"
#include "Poly.h"
#include "CalPoly.h"
#include "PrintPoly.h"
#include "InputProcess.h"

using namespace std;


int main(){

	string polyStr1;
	string polyStr2;
	Poly poly1;
	Poly poly2;
	Poly polyResult;
	char func;


	cout << "\n Please type polynomial in this format: "
		<< "x^2 + 12y^3-3.5z"
		<< "\n No '*' between coefficients and variables, No order required.";
	cin >> polyStr1;
	poly1 = Poly(polyStr1); 

	cout << "\n Please type  another polynomial";
	cin >> polyStr2;
	poly2 = Poly(polyStr2);

	cout << "\n Please choose add or sub calculation A/S";
	cin >> func;
	polyResult = CalPoly(poly1, poly2, func);

	PrintPoly(polyResult);

	system("pause");
	return 0;
}
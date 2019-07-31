// Problem09_SpecialPythagoreanTriplet.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <math.h>

using namespace std;

bool verificaTriplet2(int num1, int num2, int num3) {

	cout << "chamou a funcao -- quadrados: " << endl;
	cout << pow(num1,2) << endl;
	cout << pow(num2,2) << endl;
	cout << pow(num3,2) << endl;


	if ((pow(num1, 2) + pow(num2, 2)) == pow(num3, 2)) return(true);
	else return(false);

}

int verificaTriplet(int num1, int num2) {

	int num3 = 0;
	float num4 = 0;

	num3 = pow(num1, 2) + pow(num2, 2);
	
	num4 = (float) num3;

	if (sqrt(num4) - sqrt(num3) == 0) return(sqrt(num3));
	else return(-1);
		
}

bool verificaSoma(int num1, int num2, int num3) {

	if (num1 + num2 + num3 == 1000) return(true);
	else return(false);

}

int main()
{

	float teste;
	bool verifica = false;
	int a = 2, b = 2, c, res;
	//int aux1, aux2;
	
	while (verifica == false) {

		for (a = 0; a < 500; a++) {

			for (b = 0; b < 500; b++) {

				if (verificaTriplet(a, b) > 0 && verificaSoma(a, b, verificaTriplet(a, b)) == true) {

					c = verificaTriplet(a, b);

					cout << "a: " << a << endl;
					cout << "b: " << b << endl;
					cout << "c: " << c << endl;

					cout << "resultado: " << (a * b * c) << endl;

					verifica = true;

				}

			}

		}

	}
	

	//if (verificaTriplet2(a, b, c) == true) cout << "\n verdadeiro \n";
	//else cout << "\n deu ruim\n";

	//if (verificaSoma(a, b, c) == true) cout << "\n achou \n";
	//else cout << "\n perdeu\n";

	


    cout << "\n\n\n\nHello World!\n"; 
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

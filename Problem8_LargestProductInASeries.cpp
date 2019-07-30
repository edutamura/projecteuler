// Problem8_LargestProductInASeries.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <fstream>
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	char data[1001];
	long aux, aux2;
	long numero[1000], resultado1 = 0, resultado2 = 0;
	ifstream infile;
	infile.open("numero.txt");

	//preenche o vetor com o numero, mas como char
	if (infile.is_open() && infile.good()) //verificamos se está tudo bem
	{
		infile >> data; 		//colocamos os dados abertos no array
		//cout << data << endl;
		infile.close();
	}

	//preenche o vetor transformando de char para long
	for (aux = 0; aux < 1000; aux++) {

		numero[aux] = data[aux] - '0';

	}
	
	for (aux = 0; aux < 1000; aux++) {

		resultado1 = (long) numero[aux] * numero[aux + 1] * numero[aux + 2] * numero[aux + 3] * numero[aux + 4] * numero[aux + 5] * numero[aux + 6] * numero[aux + 7] * numero[aux + 8] * numero[aux + 9] * numero[aux + 10] * numero[aux + 11] * numero[aux + 12];
						
		if (resultado1 > resultado2) {
			
			cout << "\nresultado1 maior que resultado2: " << resultado1 << " > " << resultado2 << endl;
			
			resultado2 = resultado1;
			/*
			cout << "\nposicao: " << aux << endl;

			aux2 = aux;

			while(aux2 < (aux + 13)){

				cout << numero[aux2];
				aux2++;

			}
			cout << "\n";
			for (aux2 = aux; aux2 < (aux + 13); aux2++) {

				cout << numero[aux2];
			
			}
			*/			
		}

	}
	
	/*
	for (aux = 0; aux < (1000 - 4); aux++) {

		resultado1 = numero[aux] * numero[aux + 1] * numero[aux + 2] * numero[aux + 3];

		//cout << "\nresultado1: " << resultado1 << endl;

		if (resultado1 > resultado2) {

			cout << "\nresultado1 maior que resultado2: " << resultado1 << " > " << resultado2 << endl;

			resultado2 = resultado1;

			//cout << "\nnumeros: " << numero[aux] << " " << numero[aux+1] << " " << numero[aux+2] << " " << numero[aux+3] << " " << endl;
			for (aux2 = aux; aux2 < (aux + 4); aux2++) {

				cout << numero[aux2];

			}

		}

	}
	*/
	cout << "\n\n\nimprimindo numero:\n\n\n";

	for (aux = 0; aux < 1000; aux++) {

		cout << numero[aux];

	}
	
	
	cout << "\n\n\nimprimindo resultado:\n\n\n";
	cout << "resultado: " << resultado2 << endl;

	//#ifdef WIN32
	//system("pause");
	//#endif
	//return 0;
	
	//std::cout << "\nHello World!\n"; 
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

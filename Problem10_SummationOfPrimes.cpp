// Problem10_SummationOfPrimes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

long long vet[1000000];
long long contadorVetor = 0, numero = 0;

//Função para preencher o número primo no vetor vet[]
void preencheVetor(long valor) {

	vet[contadorVetor] = valor;

}

bool verificaPrimo(long numero) {

	//descrição das variáveis locais:
	//aux: auxiliar no loop
	//aux2: auxiliar para registrar o resultado da verificação
	int aux;
	bool aux2 = false;
	long raiz_numero = sqrt(numero);

	//cout << "\nVerificaPrimo: " << numero << "\n";

	//verifica se o número é divisível pelos primos já registrados no vetor

	if (numero == 0 || numero == 1) {

		cout << "\n retornou falso pq eh 0 ou 1\n";

		return(false);

	}
	else if (numero == 2) {

		cout << "\n retornou verdadeiro pq eh 2\n";

		return(true);

	}
	else {

		//cout << "\n\n entrou no else func\n\n";

		//para saber se um número é primo,
		//basta saber se ele não é divisível pelas primos menores do que sua raíz.
		for (aux = 0; vet[aux] <= raiz_numero && aux <= (contadorVetor - 1); aux++) {

			//cout << "\n\n entrou no for func\n\n";

			if (numero % vet[aux] == 0) {

				//cout << "\nfalso: " << numero << " nao primo\n";

				return(false);

			}
			else {
				aux2 = true;
			}

		}

	}

	if (aux2 == true) {
		cout << "\nverdadeiro: " << numero << " eh primo\n";
	}

	return(aux2);

}


int main()
{
	//descrição das variáveis locais:
	//cont: serve para registrar a quantidade de números primos
	//i: numero sendo verificado
	int x = 0;
	long soma = 0;
	//int y;
	bool verifica = false;

	cout << "\n\n-------------------\n\n";

	cout << "Iniciando";

	cout << "\n\n-------------------\n\n";

	contadorVetor = 0;

	while (vet[contadorVetor] < 2000001) {

		//cout << "\nNumero sendo analisado: " << numero << "\n";
		//cout << "ContadorVetor = " << contadorVetor << "\n";

		if (verificaPrimo(numero) == true) {

			preencheVetor(numero);
			soma = soma + numero;

			if (numero == 2) {

				numero++;

			}
			else {

				numero = numero + 2;

			}

			contadorVetor++;

		}
		else {

			numero++;

		}

	}

	cout << "\n\n------------------------ acabou o while-------------------\n\n";

	cout << "\nImprime ultimo primo: " << vet[contadorVetor] << endl;

	cout << "\n\n-------------------------------------------\n\n";
	
	/*
	for (x = 0; x < contadorVetor; x++) {

		cout << vet[x] << "  /  ";

	}
	*/
	cout << "\n\n";
	
	cout << "\n\nvalor soma: " << soma << endl;

    std::cout << "Hello World!\n"; 
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

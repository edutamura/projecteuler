// Problem7_10001stPrime.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

//descrição das variáveis globais:
//vet[]: o vetor que armazena os números primos
//contadorVetor: conta a última posição preenchida do vetor com o primo
long vet[10001];
int contadorVetor = 0, numero = 0;

//Função para preencher o número primo no vetor vet[]
void preencheVetor(long valor) {

	vet[contadorVetor] = valor;
	
}

//Função para verificar se o número é primo
bool verificaPrimo(long numero) {

	//descrição das variáveis locais:
	//aux: auxiliar no loop
	//aux2: auxiliar para registrar o resultado da verificação
	int aux;
	bool aux2 = false;
	long raiz_numero = sqrt(numero);
	
	cout << "\nVerificaPrimo: " << numero << "\n";

	//verifica se o número é divisível pelos primos já registrados no vetor
	
	if (numero == 0 || numero == 1) {

		cout << "\n retornou falso pq eh 0 ou 1\n";

		return(false);

	}
	else if(numero == 2){

		cout << "\n retornou verdadeiro pq eh 2\n";

		return(true);

	}
	else {

		cout << "\n\n entrou no else func\n\n";

		for (aux = 0; vet[aux] <= raiz_numero && aux <= (contadorVetor - 1); aux++) {

			cout << "\n\n entrou no for func\n\n";

			if (numero % vet[aux] == 0) {

				cout << "\nfalso: " << numero << " nao primo\n";

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
	int y;
	
	cout << "\n\n-------------------\n\n";

	cout << "Iniciando";

	cout << "\n\n-------------------\n\n";

	contadorVetor = 0;

	while (contadorVetor < 10001) {

		cout << "\nNumero sendo analisado: " << numero << "\n";
		cout << "ContadorVetor = " << contadorVetor << "\n";

		if (verificaPrimo(numero) == true) {

			preencheVetor(numero);

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
	
	y = 10000;

	cout << "\n\n-------------------\n\n";
	
	cout << "10001st Prime number is: " << vet[y];

	cout << "\n\n-------------------\n\n";
	/*
	for (x = 0; x < 15; x++) {

		cout << vet[x] << "  /  ";

	}
	*/
    std::cout << "\nHello World!\n"; 
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

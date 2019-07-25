// Problem7_10001stPrime.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

//descrição das variáveis globais:
//vet[]: o vetor que armazena os números primos
//contadorVetor: conta a última posição preenchida do vetor com o primo
long vet[10001];
int contadorVetor = 0;

//Função para preencher o número primo no vetor vet[]
void preencheVetor(int valor, int posicao) {

	vet[posicao] = valor;

}

//Funação para inicializar o vetor com valores "-1"
void iniciaVetor() {

	//descirção das variáveis locais:
	//aux: auxiliar no loop para preencher o vetor
	int aux = 0;

	for (aux = 0; aux <= 10001; aux++) {

		preencheVetor( -1, aux);

	}

}

//Função para verificar se o número é primo
bool verificaPrimo(long numero, int posicao) {

	//descrição das variáveis locais:
	//aux: auxiliar no loop
	int aux = 0;
	
	//verifica se o número é divisível pelos primos já registrados no vetor
	for (aux = 0; aux < posicao; aux++) {

		if (numero % vet[aux] == 0 ) {
			return(false);
		}
		
	}
	
	return(true);

}

int main()
{
	//descrição das variáveis locais:
	//cont: serve para registrar a quantidade de números primos
	//
	int cont;
	int i;

	vet[5] = 72;

	cout << "valor vetor antes: " << vet[5] << "\n\n";

	iniciaVetor();

	cont = 0;
	
	cout << "\nvalor vetor depois: " << vet[5] << "\n\n";

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

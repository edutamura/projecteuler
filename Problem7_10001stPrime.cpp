// Problem7_10001stPrime.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

//descri��o das vari�veis globais:
//vet[]: o vetor que armazena os n�meros primos
//contadorVetor: conta a �ltima posi��o preenchida do vetor com o primo
long vet[10001];
int contadorVetor = 0;

//Fun��o para preencher o n�mero primo no vetor vet[]
void preencheVetor(int valor, int posicao) {

	vet[posicao] = valor;

}

//Funa��o para inicializar o vetor com valores "-1"
void iniciaVetor() {

	//descir��o das vari�veis locais:
	//aux: auxiliar no loop para preencher o vetor
	int aux = 0;

	for (aux = 0; aux <= 10001; aux++) {

		preencheVetor( -1, aux);

	}

}

//Fun��o para verificar se o n�mero � primo
bool verificaPrimo(long numero, int posicao) {

	//descri��o das vari�veis locais:
	//aux: auxiliar no loop
	int aux = 0;
	
	//verifica se o n�mero � divis�vel pelos primos j� registrados no vetor
	for (aux = 0; aux < posicao; aux++) {

		if (numero % vet[aux] == 0 ) {
			return(false);
		}
		
	}
	
	return(true);

}

int main()
{
	//descri��o das vari�veis locais:
	//cont: serve para registrar a quantidade de n�meros primos
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

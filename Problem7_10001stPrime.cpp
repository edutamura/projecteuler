// Problem7_10001stPrime.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

//descrição das variáveis globais:
//vet[]: o vetor que armazena os números primos
//
int vet[10001];

int main()
{
	//descrição das variáveis locais:
	//cont: serve para registrar a quantidade de números primos
	//
	int cont;

	cont = 0;
	
    std::cout << "\nHello World!\n"; 
}

//Função para preencher o número primo no vetor vet[]
void preencheVetor(int valor, int posicao) {
		
	vet[posicao] = valor;
	
}

//Função para verificar se o número é primo
bool validaPrimo(int numero, int ultimo) {
	
	//descrição das variáveis locais:
	//aux: auxiliar no loop
	int aux = 0;

	while (aux != ultimo) {

	}

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

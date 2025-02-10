#include <stdio.h>
#include <stdlib.h>


int main() {
	
	// Estrutura do codigo
	
	char  estado;               // serao identificados pelas letras de A a H
	char  cidade;               // serao numeradas de 1 a 4
	char  codigo[4];            // e o estado e a cidade define o codigo da carta exemplo ( A01, B02 )
	char  nome_da_cidade;       // nome da cidade
	int   populacao;            // população
	float area;                 // area em km2
	float pib;                  // pib em bilhões
	int   pontos_turisticos;    // numeros de pontos turisticos

	// Estrutura da carta
	
	printf("digite o codigo da carta: ");
	scanf(" %s", codigo);
	
	printf("digite o nome da cidade: ");
	scanf(" %s", nome_da_cidade);
	
	printf("digite a população ");
	scanf(" %d", &populacao);
	
	printf("digite uma área");
	scanf(" %f", &area);
	
	printf("digite o pib: ");
	scanf(" %f", &pib);
	
	printf("digite pontos turisticos");
	scanf(" %d", &pontos_turisticos);
	
	return 0;
}
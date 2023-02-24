#include <stdio.h>
#include <locale.h>
#define V 10

int main () {
	setlocale(LC_ALL,"Portuguese_Brazil");
	int N = V;
	int *point = &N;
	
	printf("Valor da Variável: %d\n",N);
	printf("Valor do Endereço de Memória: %d\n",&N);
	printf("Valor da Variável usando Ponteiro: %d\n",*point);
	printf("Valor do Endereço de Memória usando Ponteiro: %d",point);
	
	return 0;
}

#include <stdio.h>
#include <locale.h>
#define V 10

int main () {
	setlocale(LC_ALL,"Portuguese_Brazil");
	int N = V;
	int *point = &N;
	
	printf("Valor da Vari�vel: %d\n",N);
	printf("Valor do Endere�o de Mem�ria: %d\n",&N);
	printf("Valor da Vari�vel usando Ponteiro: %d\n",*point);
	printf("Valor do Endere�o de Mem�ria usando Ponteiro: %d",point);
	
	return 0;
}

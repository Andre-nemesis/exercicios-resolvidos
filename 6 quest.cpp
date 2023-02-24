#include <stdio.h>

int MValor (int *vet,int tam) {
	int maior = *vet;
	for(int i = 1; i < tam; i++) if(*(vet + i) > maior) maior = *(vet+i); 
	return maior;
}

int main () {
	int tam;
	
	printf("Digite o tamanho de vetor: ");
	scanf("%d",&tam);
	int vet[tam];
	
	printf("Digite os valores do vetor: \n");
	for(int i = 0; i < tam;i++) scanf("%d",&vet[i]);
	
	int res = MValor(vet,tam);
	printf("O maior valor do vetor e: %d\n",res);
	
	return 0;
}

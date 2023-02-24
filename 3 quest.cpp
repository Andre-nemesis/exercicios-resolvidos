#include <stdio.h>

void troca(int *a,int *b) {
	int N1 =*a;
	*a = *b;
	*b = N1;
}


int main () {
	int N1,N2;
	int *p1,*p2;
	
	printf("Digite o primeiro numero: ");
	scanf("%d",&N1);
	printf("Digite o segundo numero: ");
	scanf("%d",&N2);
	
	troca(&N1,&N2);
	printf("Esse foram os numeros\nN1 = %d\tN2 = %d",N1,N2);
	
	
	return 0;
}

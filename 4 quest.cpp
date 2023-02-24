#include <stdio.h>

int soma(int *a,int *b) {
	return *a + *b;
}


int main () {
	int N1,N2;
	int *p1,*p2;
	
	printf("Digite o primeiro numero: ");
	scanf("%d",&N1);
	printf("Digite o segundo numero: ");
	scanf("%d",&N2);
	
	printf("\n\n");
	
	printf("Esse foram os numeros\nN1 = %d\tN2 = %d\n\nA soma deles = %d\n",N1,N2,soma(&N1,&N2));
	
	
	return 0;
}

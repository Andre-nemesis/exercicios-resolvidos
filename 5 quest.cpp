#include <stdio.h>

#define tmax 100

int main() {
	char str[tmax];
	char let;
	char *point;
	int cont = 0;
	
	printf("Digite uma string: ");
	scanf("%s",str);
	
	printf("\nDigite uma letra para contar: ");
	scanf("%s",&let);
	
	point = str;
	
	while(*point != '\0') {
		if(*point == let) cont ++;
		point++;
	}
	
	printf("\nA letra '%c' apareceu %d vezes da string.\n",let,cont);
	
	return 0;
}

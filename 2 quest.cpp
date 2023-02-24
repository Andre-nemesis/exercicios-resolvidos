#include <stdio.h>
#include <locale.h>
#include <string.h>
#define tmax 100

int main () {
	setlocale(LC_ALL,"Portuguese_Brazil");
	char string[tmax],sstring[tmax];
	char *point;

	printf("Digite uma string: ");
	scanf("%s",string);
	point = &string[strlen(string) - 1];
	
	printf("String de trás para frente: ");
	while(point >= string) {
		printf("%c",*point);
		point--;
	}
	printf("\n");
	
	return 0;
}

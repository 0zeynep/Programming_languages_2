#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	char string[100];
	int i=0;
	int *p;
	printf("Enter a string: ");
	gets(string);
	while(string[i]!='\0'){
		i++;
	}
	p=&i;
	printf("The length of the given string is :%d",*p);
	return 0;
}

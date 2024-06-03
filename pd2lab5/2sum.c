#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int n1=5;
	int n2=6;
	int *a;
	int *b;
	a=&n1;
	b=&n2;
	int sum= *a + *b;
	printf("The sum of the entered number is %d",sum);

	return 0;
}

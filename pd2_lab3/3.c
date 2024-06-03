#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int digit(int x){
	if(x==0){
		return 0;
	}
	else {
		return x%10 + digit(x/10);
	}
}
int main() {
	int sum,n;
	printf("Enter a number");
	scanf("%d",&n);
	sum=digit(n);
	printf("sum of digits %d",sum);
	return 0;
}

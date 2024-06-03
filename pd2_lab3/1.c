#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int sum(int n){
	if (n==0)
	{
		return 0;
	}
	else{
		return n +sum(n-1);
	}
}
int main() {
	int a,total;
	printf("Enter a number ");
	scanf("%d",&a);
	total= sum(a);
	printf("Sum of the numbers: %d",total);
	
//	return 0;
	
}

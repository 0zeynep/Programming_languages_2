#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int i,arr[5],*p;
	int sum=0;
	for(i=0;i<5;i++){
		printf("%d. element ",i+1);
		scanf("%d",&arr[i]);
	}
	p=&arr;
	for(i=0;i<5;i++){
		sum+=*(p+i);
	}
	printf("The sum of array is : %d",sum);
	
	return 0;
}

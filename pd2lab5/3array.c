#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int i,arr[5];
	for(i=0;i<5;i++){
		printf("Enter element of string ");
		scanf("%d",&arr[i]);
	}
	int *p=arr;

	for(i=0;i<5;i++)
	{
		printf("Element %d: %d\n",i,*(p+i));
	}
	return 0;
}

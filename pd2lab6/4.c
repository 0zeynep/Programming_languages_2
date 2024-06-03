#include <stdio.h>
#include <stdlib.h>
#include<string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char arr1[20];
	char arr2[20];
	char *ptr;
	int len1,len2,sum;
	printf("Enter first string");
	gets(arr1);
	len1=strlen(arr1);
	printf("Enter second string");
	gets(arr2);
	len2=strlen(arr2);
	
	sum=len1+len2;
	ptr=(char*)malloc((sum+2)*sizeof(char));
	
	strcpy(ptr,arr1);
	strcat(ptr, " ");
	strcat(ptr,arr2);
	
	printf("%s",ptr);
	return 0;
}

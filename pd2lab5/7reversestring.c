#include <stdio.h>
#include <stdlib.h>
#include<string.h>


int main() {
	char  string[100];
	printf("Enter a string");
	gets(string);
	int length,i;
	char *ptr;
	length=strlen(string);

	for(i=length-1;i>=0;i--){
	
		printf("%c",*(ptr+i));
	}
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include<string.h>
/*compare */


int main() {
	char *f,*s;
	f=(char*)malloc(50*sizeof(char));
	s=(char*)malloc(50*sizeof(char));
	printf("Enter first string ");
	gets(f);
	printf("Enter second string ");
	gets(s);
	int same=strcmp(f,s);
	if(same==0){
		printf("They are same");
	}
	else{
		
	int l1=strlen(f);
	int l2=strlen(s);
	if(l1>l2){
		printf("%s longer than %s",f,s);
	}
	else if(l1<l2){
		printf("%s longer than %s",s,f);
	}
	else{
		printf("Their length is same");
	}
	}
	free(f);
	free(s);
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char *name="Zeynep ";
	char *surname="Kaya";
	char *ptr;
	ptr=(char*)malloc(7*sizeof(char));
	strcpy(ptr,name);
	printf("%s\n",ptr);
	ptr =realloc(ptr,12*sizeof(char));
	strcpy(ptr+7,surname);
	printf("%s",ptr);
	return 0;
}

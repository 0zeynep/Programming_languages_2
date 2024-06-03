#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char name[7]={'Z','e','y','n','e','p'};
	char surname[5]={'K','a','y','a'};
	char *ptr=(char*)malloc(7*sizeof(char));
	strcpy(ptr,name);
	printf("%s\n",ptr);
	ptr=realloc(ptr,12*sizeof(char));
	strcat(ptr," ");
	strcat(ptr,surname);
	printf("%s",ptr);	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int numberOfWords(char * ptr);
int main(int argc, char *argv[]) {
	char sentence[100];
	printf("Enter a sentence ");
	gets(sentence);
	printf("Number of words: %d",numberOfWords(sentence));
	
	return 0;
}
int numberOfWords(char* ptr){
	int i,number=1;
	for (i=0;*(ptr+i)!='\0';i++){
		if(*(ptr+i)==' ')
		number++;
	}
	return number;
}

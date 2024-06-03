#include <stdio.h>
#include <stdlib.h>



int main() {
	int number;
	int e=0,o=0;
	printf("Enter your student number");
	scanf("%d",&number);
	while(number!=0){
		
		if(number%10==0){
			e++;
		}
		else{
			o++;
		}
		number =number/10;
	}
	char *eptr=(char*)malloc(e*sizeof(char));
	int *optr=(int*)malloc(o*sizeof(int));
	
	

	
	
	return 0;
}

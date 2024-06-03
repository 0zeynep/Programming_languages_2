#include <stdio.h>
#include <stdlib.h>



int main() {
	int n,*p;
	printf("enter number of elements ");
	scanf("%d",& n);
	
	
	int *ptr,i,max;
	ptr=(int*)calloc(n,sizeof(int));
	for (i=0;i<n;i++){
		scanf("%d",ptr+i);
	}
	max=0;
	for(i=0;i<n;i++){
		if(*(ptr+i)>max){
			max=*(ptr+i);
		}
		
		
	}
	printf(" The biggest number is %d",max);
	return 0;
}

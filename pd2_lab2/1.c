#include <stdio.h>
#include <stdlib.h>

int hesapla(int number,int grade){
	int arr[100];
	int total=0;
	int i;
	for(i=0;i<number;i++){
		printf("%d. student grade",i+1);
		scanf("%d",&arr[i]);
		total+=arr[i];
		int a=arr[i];
		if(a<grade){
		
			return a;
		}
	}
	total=total/number;
	printf("Average: %d",total);
}

int main(int argc, char *argv[]) {
	int n,g;
	 printf("Enter a number of students");
	 scanf("%d",&n);
	 printf("Enter passing grade");
	 scanf("%d",&g);
	 hesapla( n,g);
	 printf("Failed student:");
	 scanf("%d",&hesapla);
	 
	return 0;
}



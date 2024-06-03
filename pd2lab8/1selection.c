#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int i,a[5];
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	int n=5;	
	i=0;
	int j;
	for(i=0;i<n;i++){
		int min=a[n-1];
		 int index=n-1;
		for(j=i;j<n;j++){
			if(a[j]<min){
				min=a[j];
				index=j;
			}
		}
		a[index]=a[i];
		a[i]=min;
	}
	i=0;
	while(i<5){
		printf("%d\n",a[i]);
		i++;
	}
	
	return 0;
}

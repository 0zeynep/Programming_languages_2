#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int n,k,i,add,a[5];
	n=5;
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	
	for(i=1;i<n;i++){
		add=a[i];
		
		for(k=i-1;k>=0 && add<=a[k];k--){
			a[k+1]=a[k];
			a[k]=add;
		}
		
	}
	for(i=0;i<5;i++){
			printf("%d ",a[i]);
		}
	
	return 0;
}

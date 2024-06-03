#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int i,temp,a[5];
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	
	int j,n=5;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
		for(i=0;i<5;i++){
		printf("%d\n",a[i]);
	}
	

	
	
	
	return 0;
}

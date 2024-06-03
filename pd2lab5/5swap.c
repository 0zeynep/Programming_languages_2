#include <stdio.h>
#include <stdlib.h>

/* swap elements */

int main() {
	int n1,n2,n3;
	printf("Enter 1st element ");
	scanf("%d",&n1);
	printf("Enter 2st element ");
	scanf("%d",&n2);
	printf("Enter 3st element ");
	scanf("%d",&n3);
	int *p1,*p2,*p3;
	p1=&n3;
	p2=&n1;
	p3=&n2;
	printf("element 1 = %d\n",*p1);
	printf("element 2 = %d\n",*p2);
	printf("element 3 = %d\n",*p3);
	return 0;
}

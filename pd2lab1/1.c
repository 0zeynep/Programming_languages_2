#include <stdio.h>
#include <stdlib.h>
float area(float square){
	float a=square*square*3.14;
	return a;
}

int main(int argc, char *argv[]) {
	float r;
	printf("Enter radius");
	scanf("%f",& r);
	printf("Square:%f",area(r));
	return 0;
}

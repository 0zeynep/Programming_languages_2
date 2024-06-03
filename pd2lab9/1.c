#include <stdio.h>
#include <stdlib.h>

struct student{
	char name[50];
	int studentnumber;
	int midterm,final;
	struct student *tail;
	
};
typedef struct student node;
node *head,*newNode,*tailNode,*bestStudent;

void createStudentList(){
	int n,k;
	printf("Enter the number of elements of list");
	scanf("%d",n);
	for(k=0;k<n;k++){
		if(k==0){
			newNode=(node*)malloc(sizeof(node));
			head=newNode;	
		}
		else{
			newNode->tail=(node*)malloc(sizeof(node));
			newNode=newNode->tail;
		}
		printf("Student Number: ");
		scanf("%d",&studentnumber);
		printf("Name: ");
		scanf("%s",name);
		printf("Midterm: ");
		scanf("%d",&midterm);
		printf("Final: ");
		scanf("%d",&final);
	}
	newNode->tail=NULL;	
}
void studentList(){
	double note=0;
	node *p;
	p=head;
	while(p!=NULL){
		printf("\n*******\n");
		printf("student number:%d\t",p->studentNumber);
		printf("name:%s\t",p->name);
		printf("midterm:%d\t",p->midterm);
		printf("final:%d\t",p->final);
		note=p->midterm*0.4+p->final*0.6;
		printf("Note: %.2f\t",note);
		printf("\n******\n");
		p=p->tail;	
	}
}
void addStudent(){
	int recordNo;
	node*p,*q;
	newNode=(node*)malloc(sizeof(node));
		printf("Student Number: ");
		scanf("%d",&studentnumber);
		printf("Name: ");
		scanf("%s",name);
		printf("Midterm: ");
		scanf("%d",&midterm);
		printf("Final: ");
		scanf("%d",&final);
		printf("Which record do you want to add before");
		scanf("%d",&recordNo);
		p=h;
		if(p->studentnumber==recordNo){
			newNode
		}
}

int main(int argc, char *argv[]) {
	
	return 0;
}

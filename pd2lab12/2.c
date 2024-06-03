#include <stdio.h>
#include <stdlib.h>

#define FILE_NAME "student.dat"
typedef struct{
	double studentNo;
	char name[50];
	char department[50];
}Student;
void addRecord();
void searchByStudentNo();
int main() {
	FILE *filePtr;
	filePtr=fopen("student.dat","w");
	if(filePtr==NULL){
	printf("file not open");
	return;}
	fclose(filePtr);
	int i;
	printf("file opened\n");
	printf("1-Add record");
	printf("2-Search by student number");
	printf("3-Exit ");
	scanf("%d",&i);
	getchar();
	switch(i){
		case 1:
			addRecord();
			break;
		case 2:
			searchByStudentNo();
			break;
			case 3:
				exit(0);
		default:
			printf("wrong choose");
			
	}
	return ;
}
void addRecord(){
	FILE *filePtr;
	filePtr=fopen("student.dat","a");
	if(filePtr==NULL){
		printf("file not open");
	}
	else{
		Student student;
	printf("Student number: ");
	scanf("%lf",&student.studentNo);
	printf("Name: \n");
	fgets(student.name,sizeof(student.name),stdin);
	printf("Department: ");
	fgets(student.department,sizeof(student.department),stdin);
	
	fwrite(&student,sizeof(student),1,filePtr);
	fclose(filePtr);
	printf("Record is added");
	
	}
}
void searchByStudentNo(){
	FILE *filePtr;
	filePtr=fopen("student.dat","r");
	int found=0;
	if(filePtr==NULL)
	printf("file not open");
	else{
		
		double searchNumber;
		Student student;
		printf("Enter search student number");
		scanf("%lf",&searchNumber);
		while(fread(&student,sizeof(student),1,filePtr)){
			if(student.studentNo==searchNumber){
				printf("Student Number: %lf",&student.studentNo);
				printf("Name : %s",student.name );
				printf("Department: %s",student.department);
				found =1;
			}
		}
	}
	fclose(filePtr);
	if(!found)
	printf("Not found");
}

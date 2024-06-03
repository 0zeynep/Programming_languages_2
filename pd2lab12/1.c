#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define FILE_NAME "students.dat"
typedef struct{
	double studentNumber;
	char name[100];
	char department[100];
}Student;
void createFile();
void addRecord();
void searchByName();

int main() {

	printf("1-Create file \n");
	printf("2-Add record \n");
	printf("3-Search by name \n");
	printf("4-Exit ");
	int choice;
	scanf("%d",&choice);
	switch(choice){
		case 1:
			createFile();
			break;
	
		case 2:
			addRecord();
			break;
		case 3:
			searchByName();
			break;
		case 4 :
			exit(0);
		default:
			printf("Wrong choice");
}
	return 0;
}
void createFile(){
	FILE *mfPtr=fopen("students.dat","w");
	if(mfPtr==NULL){
		printf("file not open\n");
		return;
	}
	fclose(mfPtr);
	printf("file opened");


}
void addRecord(){
	FILE *mfPtr=fopen("students.dat","a");
	if(mfPtr==NULL)
		printf("file not open");
	else{
		Student student;
		printf("Student no:");
		scanf("%lf",&student.studentNumber);
		printf("Name: ");
		fgets(student.name,sizeof(student.name),stdin);
		printf("Department: ");
		fgets(student.department,sizeof(student.department),stdin);
		fwrite(&student,sizeof(student),1,mfPtr);
		
			}
			fclose(mfPtr);	
}
void searchByName(){
	FILE *mfPtr=fopen("students.dat","r");
		if(mfPtr==NULL)
			printf("file not open");
		else
		{
			int found=0;
			char searchName[50];
			printf("Search name: ");
			fgets(searchName,sizeof(searchName),stdin);
			Student student;
			while(fread(&student,sizeof(student),1,mfPtr)){
				if(strcmp(student.name,searchName)==0){
					printf("Student no: %lf\n",&student.studentNumber);
					printf("Name: %s\n",student.name);
					printf("Department: %s",student.department);
					found=1;
					break;
				}

			fclose(mfPtr);
			if(!found)
			printf("not found");
			}

			}

}












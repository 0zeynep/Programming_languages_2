#include <stdio.h>
#include <stdlib.h>


struct student{
	double studentid;
	char name[20];
	int midterm;
	int final;
	struct student *next;
};
typedef struct student node;
node *head,*newNode,*nextNode;
void createList();
void addNewRecord();
void listRecords();
void updateRecord();
void calculateAverage();
void bestStudent();
int main() {
	
	while (1){
	
	printf("1-Add new record\n");
	printf("2-List records\n");
	printf("3-Update record\n");
	printf("4-Calculate class average\n");
	printf("5-Best student \n");
	int i;
	printf("Enter your choice");
	scanf("%d",&i);
	createList();
	switch(i){
		case 1:
			addNewRecord();
			break;
		case 2:
			listRecords();
			break;
		case 3 :
			updateRecord();
			break;
		case 4:
			calculateAverage();
			break;
		case 5 :
			bestStudent();
			break;
		case 6 :
			exit(0);
			default:
			printf("Wrong choice");	
	}
	}
	return 0;
}
void createList(){
	int n,k;
	node *head,*p;
	printf("How many students in the list ?");
	scanf("%d",&n);
for(k=0;k<n;k++){
	if(k==0){
		head=(node*)malloc(sizeof(node));
		p=head;
	}
	else{
		p->next=(node*)malloc(sizeof(node));
		p=p->next;
	}
	printf("%d. Student number: ",k+1);
	scanf("%lf",&p->studentid );
	printf("Name: ");
	scanf("%s",p->name );
	printf("Midterm grade: ");
	scanf("%d",&p->midterm );
	printf("Final grade: ");
	scanf("%d",&p->final );
	
	}
	p->next =NULL;
		
}
void addNewRecord(){
	int recordNo;
	node *p,*q;
	node *newNode=(node*)malloc(sizeof(node));
	printf("Student Number: ");
	scanf("%lf",&newNode->studentid );
	printf("Name:");
	scanf("%s",newNode->name );
	printf("Midterm : ");
	scanf("%d",&newNode->midterm );
	printf("Final: ");
	scanf("%d",&newNode->final );
	printf("Which record the ad before");
	scanf("%d",&recordNo);
	p=head;
	if(p==NULL || p->studentid==recordNo){
	
		newNode->next=p;
		head=newNode;
		}
	else{
		while(p->next!=NULL){
	
			q=p;
			p=p->next ;
			
			break;
				}
			if(p->studentid ==recordNo){
				q->next =newNode;
				newNode->next=p;
			}
			else if(p->next ==NULL)
			p->next=newNode;
			newNode->next=NULL;
	}

}
void listRecords(){
	double grade=0;
	node *p;
	p=head;
	while(p!=NULL){
		printf("Student no: %f\n ",&p->studentid);
		printf("Name: %s\n",p->name );
		printf("Midterm:%d\n",&p->midterm );
		printf("Final:%d\n",&p->final  );
		grade=p->midterm * 0.4 + p->final *0.6;
		printf("%f\n",&grade);
		p=p->next ;
	}
	
}
void updateRecord(){
	int recordNo;
	node *p,*q;
	printf("Enter update record number");
	scanf("%d",&recordNo);
	p=head;
	if(p->studentid ==recordNo){
	
	head=p->next;
	free(p);}
	else{
		while(p->next !=NULL){
			if(p->studentid ==recordNo) break;
			else{
				q=p;
				p=p->next ;
			}
			if(p->studentid ==recordNo){
				q->next =p->next;
				free(p);
			}
			else if(p->next ==NULL){
				printf("There is no number to delete");
			}
		}
	}
}
void calculateAverage() {
    node *p = head;
    double sum = 0.0;
    int count = 0;
    while (p != NULL) {
        double grade = p->midterm * 0.4 + p->final * 0.6;
        sum += grade;
        count++;
        p = p->next;
    }
    if (count == 0) {
        printf("No records to calculate average\n");
    } else {
        printf("Class average: %.2f\n", sum / count);
    }
}
void bestStudent(){
	node* best=head;
	double bestAverage=best->midterm * 0.4 + best->final  * 0.6;
	node* p=head->next ;
	while(p!=NULL){
		double currentAverage=p->midterm *0.4 + p->final *0.6;
		if(currentAverage>bestAverage){
			best=p;
			bestAverage=currentAverage;
		}
		p=p->next ;
	}
	printf("Best student :");
	printf("No:%lf",best->studentid );
	printf("Name:%s",best->name );
	printf("Midterm:%d",best->midterm );
	printf("Final:%d",best->final );
}


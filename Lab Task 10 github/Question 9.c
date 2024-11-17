#include<stdio.h>
struct Employees{
	int employeeID;
	char name[50],department[50];
	float salary;
};

int main(){
	int numemployees;
	printf("Enter number of employees to be entered\n");
	scanf("%d",&numemployees);
	
	struct Employees worker[numemployees];
	for(int i=0;i<numemployees;i++){
		printf("Enter ID of Employee %d : ",i+1);
		scanf("%d",&worker[i].employeeID);
		getchar();
		printf("Enter Name of Employee %d : ",i+1);
		scanf("%[^\n]",worker[i].name);
		getchar();
		printf("Enter Department of Employee %d : ",i+1);
		scanf("%[^\n]",worker[i].department);
		getchar();
		printf("Enter Salary of Employee %d : ",i+1);
		scanf("%f",&worker[i].salary);
		getchar();
	}
	printf("\nDisplaying all information\n");
	for(int i=0;i<numemployees;i++){
		printf("Employee ID : %d\nEmployee Name : %s\nEmployee Department %s\nEmployee Salary : %.2f"
			    ,worker[i].employeeID,worker[i].name,worker[i].department,worker[i].salary);
		printf("\n");
	}
return 0;
}


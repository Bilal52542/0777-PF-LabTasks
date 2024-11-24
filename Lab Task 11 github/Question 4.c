#include <stdio.h>
#include <string.h>

struct Employee {
    char name[50], Department[50],DateofBirth[50];
    int EmployeeID, Salary;
};

void add_an_employee(struct Employee employee[], int *n) {
    int number;
    printf("How many employees to add? ");
    scanf("%d", &number);

    for (int i = *n; i < *n + number; i++) {
        printf("Enter name: ");
        getchar();
        scanf("%[^\n]", employee[i].name);
        
        printf("Enter department: ");
        getchar();
        scanf("%[^\n]", employee[i].Department);

        printf("Enter date of birth (e.g 29/3/2006) : ");
        scanf("%s", &employee[i].DateofBirth);

        printf("Enter employee ID: ");
        scanf("%d", &employee[i].EmployeeID);

        printf("Enter salary: ");
        scanf("%d", &employee[i].Salary);
    }

    *n +=number;//add new employees to previous total
}

void delete_an_employee(struct Employee employee[], int *n) {
    int employeeID;
    printf("Enter Employee ID of employee you wish to delete: ");
    scanf("%d", &employeeID);

    for (int i = 0; i < *n; i++) {
        if (employeeID == employee[i].EmployeeID) {
            strcpy(employee[i].DateofBirth, "0");
            employee[i].Salary = 0;
            employee[i].EmployeeID = 0;
            strcpy(employee[i].name, "0");
            strcpy(employee[i].Department, "0");
            printf("Employee with ID %d has been deleted.\n", employeeID);
            return;
        }
    }
    printf("Employee with ID %d not found.\n", employeeID);
}

void display_employees(struct Employee employee[], int n) {
	int found=0;
    for (int i = 0; i < n; i++) {
        if (employee[i].EmployeeID != 0) {
            printf("\nEmployee Name: %s", employee[i].name);
            printf("\nEmployee Department: %s", employee[i].Department);
            printf("\nEmployee Date of Birth: %s", employee[i].DateofBirth);
            printf("\nEmployee ID: %d", employee[i].EmployeeID);
            printf("\nEmployee Salary: %d\n", employee[i].Salary);
            found=1;
        }
        if (!found){
        	printf("\nNo employees to display\n");
		}
    }
}

int main() {
    struct Employee employees[100];
    int n = 0;

    while (1) {
        int choice;
        printf("-------------------------\n");
        printf("1. Add employees\n2. Delete employee\n3. Display employees\n4. Exit\n");
        printf("-------------------------\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {	
            case 1:
                add_an_employee(employees, &n);
                break;
            case 2:					
                delete_an_employee(employees, &n);
                break;
            case 3:
                display_employees(employees, n);
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}


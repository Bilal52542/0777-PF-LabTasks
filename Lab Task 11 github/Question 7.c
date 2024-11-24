#include <stdio.h>
#include <string.h>

struct Course {
    int course_id;
    char course_name[50];
    char instructor_name[50];
    int credits;
};

struct Department {
    char department_name[50];
    struct Course courses[50];
    int course_count;
};

void add_a_department(struct Department departments[], int *department_count) {
    printf("Enter department name: ");
    scanf(" %[^\n]", departments[*department_count].department_name);
    getchar();
    departments[*department_count].course_count = 0;
    (*department_count)++;
}

void add_a_course(struct Department departments[], int department_count) {
    char department_name[50];
    int found = -1;
    printf("Enter the department name to add a course: ");
    scanf(" %[^\n]", department_name);
    getchar();

    for (int i = 0; i < department_count; i++) {
        if (strcmp(departments[i].department_name, department_name) == 0) {
            found = i;
            break;
        }
    }

    if (found == -1) {
        printf("Department not found.\n");
        return;
    }

    struct Course *course = &departments[found].courses[departments[found].course_count];
    printf("Enter course ID: ");
    scanf("%d", &course->course_id);
    getchar();
    printf("Enter course name: ");
    scanf(" %[^\n]", course->course_name);
    getchar();
    printf("Enter instructor name: ");
    scanf(" %[^\n]", course->instructor_name);
    getchar();
    printf("Enter credits: ");
    scanf("%d", &course->credits);
    getchar();

    departments[found].course_count++;
}

void display_departments(struct Department departments[], int department_count) {
    for (int i = 0; i < department_count; i++) {
        printf("\nDepartment: %s\n", departments[i].department_name);
        for (int j = 0; j < departments[i].course_count; j++) {
            struct Course *course = &departments[i].courses[j];
            printf("\nCourse:");
            printf(" ID: %d, Name: %s, Instructor: %s, Credits: %d\n",
                   course->course_id, course->course_name, course->instructor_name, course->credits);
        }
    }
}

void calculate_total_credits(struct Department departments[], int department_count) {
    char department_name[50];
    int found = -1, total_credits = 0;

    printf("Enter the department name to calculate total credits: ");
    scanf(" %[^\n]", department_name);
    getchar();

    for (int i = 0; i < department_count; i++) {
        if (strcmp(departments[i].department_name, department_name) == 0) {
            found = i;
            break;
        }
    }

    if (found == -1) {
        printf("Department not found.\n");
        return;
    }

    for (int j = 0; j < departments[found].course_count; j++) {
        total_credits += departments[found].courses[j].credits;
    }

    printf("Total credits for department %s: %d\n", department_name, total_credits);
}

int main() {
    struct Department departments[50];
    int department_count = 0;
    
    strcpy(departments[department_count].department_name, "Computer Science");
    departments[department_count].course_count = 1;
    struct Course *course = &departments[department_count].courses[0];
    course->course_id = 1001;
    strcpy(course->course_name, "Programming Fundamentals");
    strcpy(course->instructor_name, "Ms. Khadija");
    course->credits = 3;

    department_count++;

    while (1) {
        int choice;
        printf("----------------------------------------\n");
        printf("1. Add Department\n");
        printf("2. Add Course\n");
        printf("3. Display Departments and Courses\n");
        printf("4. Calculate Total Credits\n");
        printf("5. Exit\n");
        printf("----------------------------------------\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch (choice) {
            case 1:
                add_a_department(departments, &department_count);
                break;
            case 2:
                add_a_course(departments, department_count);
                break;
            case 3:
                display_departments(departments, department_count);
                break;
            case 4:
                calculate_total_credits(departments, department_count);
                break;
            case 5:
                return 0;
        }
    }
}


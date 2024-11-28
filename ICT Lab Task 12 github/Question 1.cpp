#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;
    string address;

public:
    Person(string name, int age, string address)
        : name(name), age(age), address(address) {}

    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Address: " << address << endl;
    }
};

class Student : public Person {
private:
    int studentID;
    float grades[10];
    int gradeCount;

public:
    Student(string name, int age, string address, int studentID)
        : Person(name, age, address), studentID(studentID), gradeCount(0) {}

    void addGrade(float grade) {
        if (gradeCount < 10) {
            grades[gradeCount++] = grade;
        } else {
            cout << "Maximum grades reached for Student ID: " << studentID << endl;
        }
    }

    float calculateGPA() {
        if (gradeCount == 0) return 0.0;
        float sum = 0;
        for (int i = 0; i < gradeCount; i++) {
            sum += grades[i];
        }
        return sum / gradeCount;
    }

    void displayDetails() {
        Person::displayDetails();
        cout << "Student ID: " << studentID << endl;
        cout << "GPA: " << calculateGPA() << endl;
    }
};

class Payable {
public:
    float calculateSalary(int classesTaught, float ratePerClass) {
        return classesTaught * ratePerClass;
    }
};

class Teacher : public Person, public Payable {
private:
    int teacherID;
    string subject;
    int classesTaught;
    float ratePerClass;

public:
    Teacher(string name, int age, string address, int teacherID, string subject, int classesTaught, float ratePerClass)
        : Person(name, age, address), teacherID(teacherID), subject(subject), classesTaught(classesTaught), ratePerClass(ratePerClass) {}

    void assignGrade(Student &student, float grade) {
        student.addGrade(grade);
    }

    void displayDetails() {
        Person::displayDetails();
        cout << "Teacher ID: " << teacherID << endl;
        cout << "Subject: " << subject << endl;
        cout << "Salary: " << calculateSalary(classesTaught, ratePerClass) << endl;
    }
};

int main() {
    Teacher teacher("John Doe", 40, "123 Main St", 101, "Mathematics", 5, 200.0);
    Student student1("Alice Smith", 20, "456 Elm St", 201);
    Student student2("Bob Johnson", 22, "789 Pine St", 202);

    teacher.assignGrade(student1, 85.0);
    teacher.assignGrade(student1, 90.0);
    teacher.assignGrade(student2, 78.0);
    teacher.assignGrade(student2, 88.0);

    cout << "Teacher Details:" << endl;
    teacher.displayDetails();
    cout << endl;

    cout << "Student 1 Details:" << endl;
    student1.displayDetails();
    cout << endl;

    cout << "Student 2 Details:" << endl;
    student2.displayDetails();

    return 0;
}


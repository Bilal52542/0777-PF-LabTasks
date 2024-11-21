#include <iostream>
#include <string>
using namespace std;

class Person{
	private:
		string name;
		int age;
	public:
		void set_name(string my_name){
            name=my_name;
        }
		string get_name(){
            return name;
        }
        void set_age(int my_age){
            age=my_age;
        }
        int get_age(){
            return age;
        }
		void display_info(){
			cout << "Name is " << name << endl;
			cout << "Age is " << age << endl;
		}
};
class Employee : public Person{
	private:
		int employee_id;
	public:
		void set_employee_id(int id) {
            employee_id = id;
        }
        int get_employee_id() {
            return employee_id;
        }
		void display_info(){
			Person::display_info();
			cout << "Employee ID is " << employee_id << endl;
		}
};
class Student : public Person{
	private:
		int student_id;
	public:
		void set_student_id(int id) {
            student_id = id;
        }
        int get_student_id() {
            return student_id;
        }
		void display_info(){
			Person::display_info();
			cout << "Student ID is " << student_id << endl;
		}
};
int main(){
	Employee employee1;
    employee1.set_name("Bilal");
    employee1.set_age(30);
    employee1.set_employee_id(1001);
    employee1.display_info();

    Student student1;
    student1.set_name("Ahmed");
    student1.set_age(20);
    student1.set_student_id(2002);
    student1.display_info();

return 0;
}


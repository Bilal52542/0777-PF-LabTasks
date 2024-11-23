#include <iostream>
#include <string>
using namespace std;

class Animal{
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
class Mammal : public Animal{
    public:
        void feed_baby(){
            cout << "Feeding Baby Mammal" << endl;
        }
};
class Bird : public Animal{
    public:
        void lay_egg(){
            cout << "Laying An Egg" << endl;
        }
};
class Reptile : public Animal{
    public:
        void shed_skin(){
            cout << "Shedding Skin" << endl;
        }
};
int main(){
    Mammal mammal;
    mammal.set_name("Dolphin");
    mammal.set_age(15);
    mammal.display_info();
    mammal.feed_baby();
    
    Bird bird;
    bird.set_name("Pegion");
    bird.set_age(2);
    bird.display_info();
    bird.lay_egg();
    
    Reptile reptile;
    reptile.set_name("Rattlesnake");
    reptile.set_age(1);
    reptile.display_info();
    reptile.shed_skin();

return 0;
}

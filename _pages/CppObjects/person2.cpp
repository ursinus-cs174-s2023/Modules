#include <iostream>
using namespace std;

class Person { // A class is a "designer variable type"
    public:
        ///////////   Instance Variables /////////////
        const char* name;
        int age; // in years
        double height; // in centimeters
        //////////////////////////////////////////////


        ////////// Instance methods //////////////////
        // Every instance method has access to the instance variables

        // Always has the name of the class, and no return type
        Person(const char* name, int age, double height) { 
            // Gets called when an object is "instantiated"

            // "this" is a pointer to the object that's calling this instance method
            // We can dereference it to get to instance variables/methods
            (*this).name = name;
            this->age = age;
            this->height = height;
        }

        void printInfo() {
            cout << name << " is " << age << " years old ";
            cout << "and is " << height << " cm tall\n";
        }

        int getAge() {
            return age;
        }

        //////////////////////////////////////////////
};



int main() {
    // We refer to instances of classes as "objects"
    // int x = 7; x is an instance the int type
    // char c = 'a';  c is instance of the char type

    // We can use the "dot notation" to set instance variables


    Person chris("Chris", 33, 9001); // chris is an "instance" of the Person class

    Person nick("Nick", 80, 10000);
    nick.age = 100;

    Person* ptr = &chris;
    (*ptr).age = 33;
    ptr->age = 33; // foo-> is equivalent to (*foo).

    chris.printInfo();
    nick.printInfo();
}
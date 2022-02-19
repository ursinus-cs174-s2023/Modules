#include <stdio.h>
#include <iostream>
using namespace std;

class Person {
    protected:  // Private to everything except for derived classes
        string name;
        int age;
    public:
        static int numPeople;

        Person(string name, int age) {
            this->name = name;
            this->age = age;
            numPeople++;
        }
        void setName(string name) {
            this->name = name;
        }
        void setAge(int age) {
            this->age = age;
        }
        int getAge() {
            return age;
        }
        string getName() {
            return name;
        }
        void print() {
            cout << name << " is " << age << " years old";
        }

        static int getNumPeople() {
            return numPeople;
        }
};

int Person::numPeople = 0;

// CODE SHARING!!! (REUSABILITY!!!)
// Let me make the Student class "inherit" from the Person class
// In this context, Student is the "child" / "derived" class
// Person is the "parent" or "base" class
class Student: public Person {
    private:
        float gpa;
    public:
        Student(string name, int age, float gpa): Person(name, age) {
            this->gpa = gpa;
        }
        void print() { // "Overriding" a parent method
            Person::print();
            cout << " and has a GPA of " << gpa;
        }
};

int main() {
    Person person("Chris", 32);
    person.print();
    cout << "\n\n";
    Student person2("Celia", 32, 4.0);
    person2.setName("Celia L");
    person2.print();
    cout << "\n\n";
    cout << "Num people is " << Person::getNumPeople();
    return 0;
}
---
layout: exercise_cpp
permalink: /CppClasses/Exercise1
title: "CS174: Classes And Inheritance: C++ Classes: Exercise 1"
excerpt: "CS174: Classes And Inheritance: C++ Classes: Exercise 1"
canvasasmtid: "143424"
canvaspoints: "1.5"
canvashalftries: 5

info:
  prev: "./Video1"
  next: "./Video2"
  points: 1.5
  instructions: "Fill in the celebrateNBirthdays() method to celebrate some number of birthdays on a particular Person object passed by reference.  Since you're working with a pointer to an object, you should use the arrow notation in a loop to call the celebrateBirthday() method on the object."
  goals:
    - Work classes and objects in C++
    - Work with dynamic object references in C++
    
processor:  
  correctfeedback: "Correct!!" 
  incorrectfeedback: "Try again"
  submitformlink: false
  feedbackprocess: | 
    var pos = runtime.text.trim();
  correctcheck: |
    pos.includes("age is 40") && pos.includes("age is 50")
  incorrectchecks:
    - incorrectcheck: |
        pos.includes("Person name is Chris, age is 31")
      feedback: "Try again.  It looks like you're not actually calling the celebrateBirthdays() method."
 
files:
  - filename: "Person Class"
    name: person
    ismain: false
    isreadonly: true
    isvisible: true
    code: | 
      #include &ltstdio.h&gt

      class Person {
          private:
              int age;
              char* name;
          public:
              Person(int age, char* name) {
                  (*this).age = age;
                  this->name = name;
              }
              void celebrateBirthday() {
                  age++;
              }
              void printInfo() {
                  printf("Person name is %s, age is %i\n", name, age);
              }    
      };

  - filename: "Student Code"
    name: student
    ismain: false
    isreadonly: false
    isvisible: true
    code: | 
      void celebrateNBirthdays(Person* p, int N) {
        // TODO: Fill this in
      }


  - filename: "Main Area"
    name: main
    ismain: true
    isreadonly: true
    isvisible: true
    code: | 
      int main() {
          const char* name = "Chris";
          Person chris(31, (char*)name);
          celebrateNBirthdays(&chris, 9);
          chris.printInfo();
          celebrateNBirthdays(&chris, 10);
          chris.printInfo();
      }
        
---

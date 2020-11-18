---
layout: exercise_cpp
permalink: /Module12/Exercise2
title: "CS174: Module 12: C++ Inheritance Exercise 2"
excerpt: "CS174: Module 12: C++ Inheritance Exercise 2"
canvasasmtid: "103997"
canvaspoints: "1"
canvashalftries: 5

info:
  prev: "./Video2"
  next: "./Video3"
  points: 1
  instructions: "Change the code in the <code>Person</code> class so that runtime polymorphism is achieved on the <code>celebrateBirthday()</code> method in the <code>Button</code> class, even when we hold a reference to a button object that's <code>Person*</code>."
  goals:
    - Work with classes and objects in C++
    - Work with inheritance in C++
    
processor:  
  correctfeedback: "Correct!!" 
  incorrectfeedback: "Try again"
  submitformlink: false
  feedbackprocess: | 
    var pos = runtime.text.trim();
  correctcheck: |
    pos.includes("20")
  incorrectchecks:
    - incorrectcheck: |
        pos.includes("40")
      feedback: "Try again.  It appears that you're still calling the celebrateBirthday() method on the Person class."
 
files:
  - filename: "Student Code"
    name: student
    ismain: false
    isreadonly: false
    isvisible: true
    code: | 
        #include &ltstdio.h&gt
        #include &ltstring&gt

        using namespace std;
      
        class Person {
            protected:
                string name;
                int age;
            public:
                Person(string name, int age) {
                    this->name = name;
                    this->age = age;
                }
                void celebrateBirthday() {
                    age++;
                }
                int getAge() {
                    return age;
                }
        };

        class Button: public Person {
            public:
                Button(string name, int age):Person(name, age){};
                void celebrateBirthday() {
                  age--;
                }
        };


  - filename: "Main Area"
    name: main
    ismain: true
    isreadonly: true
    isvisible: true
    code: | 
      int main() {
          Person* benjamin = new Button("Benjamin Button", 30);
          for (int i = 0; i < 10; i++) {
              benjamin->celebrateBirthday();
          }
          printf("\n%i\n", benjamin->getAge());
          delete benjamin;
          return 0;
      }
        
---

---
layout: exercise_cpp
permalink: /Module12/Exercise1
title: "CS174: Module 12: C++ Inheritance Exercise 1"
excerpt: "CS174: Module 12: C++ Inheritance Exercise 1"
canvasasmtid: "103996"
canvaspoints: "1"
canvashalftries: 5

info:
  prev: "./Video1"
  next: "./Video2"
  points: 1
  instructions: "Override the <code>celebrateBirthday()</code> method in the <code>Button</code> class so that it subtracts one from the age for <code>Button</code> objects instead of adding to the age."
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
      feedback: "Try again.  It looks like you're still using the default implementation of <code>celebrateBirthday()</code>."
 
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
        };


  - filename: "Main Area"
    name: main
    ismain: true
    isreadonly: true
    isvisible: true
    code: | 
      int main() {
          Button benjamin("Benjamin Button", 30);
          for (int i = 0; i < 10; i++) {
              benjamin.celebrateBirthday();
          }
          printf("\n%i\n", benjamin.getAge());
          return 0;
      }
        
---

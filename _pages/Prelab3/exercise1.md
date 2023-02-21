---
layout: exercise_cpp
permalink: /CppInheritance/Exercise1
title: "CS174: Classes And Inheritance Exercise"
excerpt: "CS174: Classes And Inheritance Exercise"
canvasasmtid: "171272"
canvaspoints: "2"
canvashalftries: 5

info:
  prev: "./Video2"
  points: 2
  instructions: "The code below starts you with a simple <code>Person</code> class.  Define a child class <code>Immortal</code> which inherits from parent, and whose constructor takes a single parameter of the name.  The age should always set to 999999999 when invoking the parent constructor."
  goals:
    - Work with classes and objects in C++
    - Use inheritance to share code between a parent and child class in C++
    
processor:  
  correctfeedback: "Correct!!" 
  incorrectfeedback: "Try again"
  submitformlink: false
  feedbackprocess: | 
    var pos = runtime.text.trim();
  correctcheck: |
    pos.includes("Felipe Andres Coronel is 999999999 years old")

files:
  - filename: "Parent Class"
    name: parent
    ismain: false
    isreadonly: true
    isvisible: true
    code: | 
      #include &ltstdio.h&gt

      class Person {
          protected:
              char* name;
              int age;
          public:
              Person(char* name, int age) {
                  this->name = name;
                  this->age = age;
              }
              void print() {
                  printf("%s is %i years old\n", name, age);
              }  
      };
    
  - filename: "Child Class (Student Code)"
    name: student
    ismain: false
    isreadonly: false
    isvisible: true
    code: | 
      // TODO: Define a child class "Immortal" which inherits
      // from parent, and whose constructor takes a single parameter
      // of the name.  The age is always set to 999999999


  - filename: "Main Area"
    name: main
    ismain: true
    isreadonly: true
    isvisible: true
    code: | 
      int main() {
          Immortal person("Felipe Andres Coronel");
          person.print();
      }
        
---

---
layout: exercise_cpp
permalink: /ClassesBasics/Exercise1
title: "CS174: Classes Exercise 1"
excerpt: "CS174: Classes Exercise 1"
canvasasmtid: "170958"
canvaspoints: "1.5"
canvashalftries: 5

info:
  prev: "./Video1"
  next: "./Video2"
  points: 1.5
  instructions: "Create an instance method called celebrateBirthday(), which increments the <code>age</code> instance variable by 1."
  goals:
    - Work classes and objects in C++
    
processor:  
  correctfeedback: "Correct!!" 
  incorrectfeedback: "Try again"
  submitformlink: false
  feedbackprocess: | 
    var pos = runtime.text.trim();
  correctcheck: |
    pos.includes("age is 34")
  incorrectchecks:
    - incorrectcheck: |
        pos.includes("age is 33")
      feedback: "Try again.  It looks like you forgot to increment age in <code>celebrateBirthday()</code>."
 
files:
  - filename: "Student Code"
    name: student
    ismain: false
    isreadonly: false
    isvisible: true
    height: 400
    code: | 
      #include &ltstdio.h&gt

      class Person {
          public:
              int age;
              char* name;
          
              Person(int pAge, char* pName) {
                  age = pAge;
                  name = pName;
              }

              void printInfo() {
                  printf("Person name is %s, age is %i\n", name, age);
              }    
      };


  - filename: "Main Area"
    name: main
    ismain: true
    isreadonly: true
    isvisible: true
    code: | 
      int main() {
          Person chris(33, "Chris");
          chris.celebrateBirthday();
          chris.printInfo();
      }
        
---

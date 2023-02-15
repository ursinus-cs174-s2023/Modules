---
layout: exercise_cpp
permalink: /ClassesBasics/Exercise2
title: "CS174: Classes Exercise 2: Object References"
excerpt: "CS174: Classes Exercise 2: Object References"
canvasasmtid: "170959"
canvaspoints: "1.5"
canvashalftries: 5

info:
  prev: "./Video2"
  next: "./Video3"
  points: 1.5
  instructions: "Fill in the method <code>ageBy10()</code> to call the instance method <code>celebrateBirthday()</code> 10 times on the <code>Person</code> object pointed to by <code>p</code>."
  goals:
    - Work classes and objects in C++
    - Work with object references in C++
    
processor:  
  correctfeedback: "Correct!!" 
  incorrectfeedback: "Try again"
  submitformlink: false
  feedbackprocess: | 
    var pos = runtime.text.trim();
  correctcheck: |
    pos.includes("age is 43")
  incorrectchecks:
    - incorrectcheck: |
        pos.includes("age is 33")
      feedback: "Try again.  It looks like you forgot to increment age."
 
files:
  - filename: "person Class"
    name: person
    ismain: false
    isreadonly: true
    isvisible: true
    height: 400
    code: | 
      #include &ltstdio.h&gt

      class Person {
          private:
              int age;
              char* name;
          
          public:
              Person(int pAge, char* pName) {
                  age = pAge;
                  name = pName;
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
    height: 200
    code: | 
      void ageBy10(Person* p) {
          // TODO: Fill this in.  Age the person pointed to by p
          // by calling the celebrateBirthday() method 10 times
      }


  - filename: "Main Area"
    name: main
    ismain: true
    isreadonly: true
    isvisible: true
    code: | 
      int main() {
          Person chris(33, "Chris");
          ageBy10(&chris);
          chris.printInfo();
      }
        
---

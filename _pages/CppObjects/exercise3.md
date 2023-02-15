---
layout: exercise_cpp
permalink: /ClassesBasics/Exercise3
title: "CS174: Classes Exercise 3: Dynamically Cloning An Object"
excerpt: "CS174: Classes Exercise 2: Dynamically Cloning An Object"
canvasasmtid: "170960"
canvaspoints: "1.5"
canvashalftries: 5

info:
  prev: "./Video3"
  next: "./Video4"
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
    pos.includes("Person name is Chris, age is 33.Person name is Chris, age is 34")
  incorrectchecks:
    - incorrectcheck: |
        pos.includes("Person name is Chris, age is 34.Person name is Chris, age is 34")
      feedback: "Try again.  Be careful!  Don't just return <code>this</code>; we want to make a clone!  So there should be a <code>new</code> somewhere."
 
files:
  - filename: "Student Code"
    name: student
    ismain: false
    isreadonly: false
    isvisible: true
    height: 600
    code: | 
      #include &ltstdio.h&gt

      class Person {
          private:
              int age;
              char* name;
          
          public:
              Person(int age, char* name) {
                  this->age = age;
                  this->name = name;
              }

              void printInfo() {
                  printf("Person name is %s, age is %i.", name, age);
              }

              void celebrateBirthday() {
                  age++;
              }

              Person* clone() {
                  // Return a dynamically allocated person object with
                  // the same age and name as this person
                  Person* ret = NULL; // TODO: this is a dummy value
                  // TODO: Fill this in
                  return ret;
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
          Person* clone = chris.clone();
          clone->celebrateBirthday();
          chris.printInfo();
          clone->printInfo();
          delete clone;
          printf("\n");
      }
        
---

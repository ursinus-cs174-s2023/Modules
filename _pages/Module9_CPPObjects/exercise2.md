---
layout: exercise_cpp
permalink: /Module9/Exercise2
title: "CS174: Module 9: C++ Classes: Exercise 2"
excerpt: "CS174: Module 9: C++ Classes: Exercise 2"
canvasasmtid: "103140"
canvaspoints: "1"
canvashalftries: 5

info:
  prev: "./Video2"
  points: 1
  instructions: "Fill in the method testConDest().  This method should first construct a person named \"bill\", then construct a person named \"chris\", then destruct chris, and then destruct bill."
  goals:
    - Work with classes and objects in C++
    - Work with dynamic object references in C++
    - Invoke destructors for dynamic objects in C++
    
processor:  
  correctfeedback: "Correct!!" 
  incorrectfeedback: "Try again"
  submitformlink: false
  feedbackprocess: | 
    var pos = runtime.text.trim();
  correctcheck: |
    pos.includes("bill is being constructed\nchris is being constructed\nchris is being destructed\nbill is being destructed")
 
files:
  - filename: "Student Code"
    name: student
    ismain: false
    isreadonly: false
    isvisible: true
    code: | 
      #include &ltstdio.h&gt

      class Person {
          private:
              char* name;
          public:
              Person(char* name) {
                  this->name = name;
                  printf("%s is being constructed\n", name);
              }
              ~Person() {
                  printf("%s is being destructed\n", name);
              }  
      };

      void testConDest() {
        Person* bill = new Person((char*)"bill");
        // TODO: Finish this.  
        // Construct chris, then destruct chris, then destruct bill
      }


  - filename: "Main Area"
    name: main
    ismain: true
    isreadonly: true
    isvisible: true
    code: | 
      int main() {
          testConDest();
      }
        
---

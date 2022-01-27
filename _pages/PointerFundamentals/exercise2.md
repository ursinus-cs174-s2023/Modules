---
layout: exercise_cpp
permalink: /PointerFundamentals/Exercise2
title: "CS174: Pointer Fundamentals Module: Exercise 2"
excerpt: "CS174: Pointer Fundamentals Module: Exercise 2"
canvasasmtid: "142147"
canvaspoints: "1.5"
canvashalftries: 5

info:
  prev: "./Exercise1"
  points: 1.5
  instructions: "Define a method <code>addTwoNums</code> which takes in three <code>int</code> variables <b>by reference</b> and stores in the third variable the sum of the first two.  In other words, your method should take in 3 int* pointers.  You'll need to dereference all of them at some point to pull this off;"
  goals:
    - Work with pointers in C++
    - Pass values by reference to methods in C++
    
processor:  
  correctfeedback: "Correct!!" 
  incorrectfeedback: "Try again"
  submitformlink: false
  feedbackprocess: | 
    var pos = runtime.text.trim();
  correctcheck: |
    pos.includes("3.174.174")
  incorrectchecks:
    - incorrectcheck: |
        pos.includes("4 2 8 2 .2 4 6 8") && pos.split(" ").length == 12
      feedback: "Try again.  Be sure to reset the length of NOut at the beginning!"
 
files:
  - filename: "Student Code"
    name: student
    ismain: false
    isreadonly: false
    isvisible: true
    code: | 
      #include &ltstdio.h&gt

      // TODO: Fill this in


  - filename: "Main Area"
    name: main
    ismain: true
    isreadonly: true
    isvisible: true
    code: | 
      int main() {
          int x = 1, y = 2;
          int z;
          addTwoNums(&x, &y, &z);
          printf("%i.", z);
          x=170;
          y=4;
          addTwoNums(&x, &y, &z);
          printf("%i.", z);
          x=160;
          y=14;
          addTwoNums(&x, &y, &z);
          printf("%i\n", z);
      }
        
---

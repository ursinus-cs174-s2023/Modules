---
layout: exercise_cpp
permalink: /Module8/Exercise1
title: "CS174: Module 8: Pointers Continued: Exercise 1"
excerpt: "CS174: Module 8: Pointers Continued: Exercise 1"
canvasasmtid: "102836"
canvaspoints: "1.5"
canvashalftries: 5

info:
  prev: "./Video1"
  next: "./Video2"
  points: 1.5
  instructions: "Fill in a method to compute the length of a string by looping until you find the null terminator."
  goals:
    - Work with pointers in C++
    - Pass values by reference to methods in C++
    - Manipulate c-strings as character arrays
    
processor:  
  correctfeedback: "Correct!!" 
  incorrectfeedback: "Try again"
  submitformlink: false
  feedbackprocess: | 
    var pos = runtime.text.trim();
  correctcheck: |
    pos.includes("5.14.34")
  incorrectchecks:
    - incorrectcheck: |
        pos.includes("0.0.0")
      feedback: "Try again.  It looks like you're still returning a length of 0 for everything."
 
files:
  - filename: "Student Code"
    name: student
    ismain: false
    isreadonly: false
    isvisible: true
    code: | 
      #include &ltstdio.h&gt

      int getLength(char* c) {
        int len = 0;
        // TODO: Fill this in

        return len;
      }


  - filename: "Main Area"
    name: main
    ismain: true
    isreadonly: true
    isvisible: true
    code: | 
      int main() {
          printf("\n");
          char* s = "hello";
          printf("%i.", getLength(s));
          s = "this is cs 174";
          printf("%i.", getLength(s));
          s = "I am lucky to get to teach you all";
          printf("%i", getLength(s));
      }
        
---

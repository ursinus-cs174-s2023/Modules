---
layout: exercise_cpp
permalink: /Module13/Exercise1
title: "CS174: Module 13: Recursion Exercise 1"
excerpt: "CS174: Module 13: Recursion Exercise 1"
canvasasmtid: "145657"
canvaspoints: "1"
canvashalftries: 5

info:
  prev: "./Video1"
  next: "./Video2"
  points: 1
  instructions: "The code below provides the beginning of a recursive implementation of the Fibonacci function.  Complete this implementation with the appropriate recursive calls.  Hint, remember how a fibonacci number is the sum of the previous two numbers.  You will have to make two recursive calls"
  goals:
    - Use recursion to design an algorithm for computing a number
    
processor:  
  correctfeedback: "Correct!!" 
  incorrectfeedback: "Try again"
  submitformlink: false
  feedbackprocess: | 
    var pos = runtime.text.trim();
  correctcheck: |
    pos.includes("1 1 2 3 5 8 13 21 34")
  incorrectchecks:
    - incorrectcheck: |
        pos.includes("1 1 0 0 0 0 0 0 0")
      feedback: "Try again.  It looks like you're still returning 0 when N > 2, but you should have a recursive call there."
 
files:
  - filename: "Student Code"
    name: student
    ismain: false
    isreadonly: false
    isvisible: true
    code: | 
        #include &ltstdio.h&gt

        int fib(int N) {
          if (N == 1 || N == 2) {
            return 1; // Our stopping condition; first two numbers are 1
          }
          else {
            return 0; // TODO: Replace this with the appropriate recursive calls
          }
        }


  - filename: "Main Area"
    name: main
    ismain: true
    isreadonly: true
    isvisible: true
    code: | 
      int main() {
          for (int N = 1; N < 10; N++) {
            printf("%i ", fib(N));
          }
          printf("\n");
          return 0;
      }
        
---

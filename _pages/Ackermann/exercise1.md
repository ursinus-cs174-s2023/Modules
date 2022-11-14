---
layout: exercise_cpp
permalink: /Ackermann/Exercise1
title: "CS174: Ackermann Function Exercise"
excerpt: "CS174: Ackermann Function Exercise"
canvasasmtid: "159925"
canvaspoints: "2"
canvashalftries: 5

info:
  next: "./Exercise2"
  points: 2
  instructions: "The Ackermann function is a recursive function that grows notoriously quickly.  The definition is as follows:<p><img src = \"../images/Ackermann/AckermannFn.png\"></p>Fill in the code below to compute this function using recursive calls."
  goals:
    - Work with recursive functions in C++
    - Implement the Ackermann function using recursive calls
    
processor:  
  correctfeedback: "Correct!!" 
  incorrectfeedback: "Try again"
  submitformlink: false
  feedbackprocess: | 
    var pos = runtime.text.trim();
  correctcheck: |
    pos.includes("1.3.7.29.125") 
  incorrectchecks:
    - incorrectcheck: |
        pos.includes("61218")
      feedback: "Try again. Please print exactly one space after each number."  
    
    - incorrectcheck: |
        pos.includes("0 6 12")
      feedback: "Try again.  Start looping at 6, not 0"
 
files:
  - filename: "Student Code"
    name: student
    ismain: false
    isreadonly: false
    isvisible: true
    height: 400
    code: | 
        #include &ltstdio.h&gt

        int A(int m, int n) {
          int ret = 0;
          // TODO: Fill this in

          return ret;
        }


  - filename: "Main Area"
    name: main
    ismain: true
    isreadonly: true
    isvisible: true
    code: | 
      int main() {
          printf("%i.", A(0, 0));
          printf("%i.", A(1, 1));
          printf("%i.", A(2, 2));
          printf("%i.", A(3, 2));
          printf("%i.", A(3, 4));
          printf("\n");
      }
        
---

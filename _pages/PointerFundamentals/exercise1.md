---
layout: exercise_cpp
permalink: /PointerFundamentals/Exercise1
title: "CS174: Pointer Fundamentals Module: Exercise 1"
excerpt: "CS174: Pointer Fundamentals Module: Exercise 1"
canvasasmtid: "149488"
canvaspoints: "1.5"
canvashalftries: 5

info:
  next: "./Exercise2"
  points: 1.5
  instructions: "Fill in a method that swaps the values of two elements in memory, which is a very useful operation in sorting algorithms, as we will see later."
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
    pos.includes("6 5.4 10")
  incorrectchecks:
    - incorrectcheck: |
        pos.includes("5 6.10 4")
      feedback: "Try again.  It looks like you aren't actually swapping elements in memory."
 
files:
  - filename: "Student Code"
    name: student
    ismain: false
    isreadonly: false
    isvisible: true
    code: | 
      #include &ltstdio.h&gt

      void swap(int* x, int* y) {
        // TODO: Fill this in
      }


  - filename: "Main Area"
    name: main
    ismain: true
    isreadonly: true
    isvisible: true
    code: | 
      int main() {
          printf("\n");
          int x = 5;
          int y = 6;
          swap(&x, &y);
          printf("%i %i.", x, y);
          x = 10;
          y = 4;
          swap(&x, &y);
          printf("%i %i\n", x, y);
      }
        
---

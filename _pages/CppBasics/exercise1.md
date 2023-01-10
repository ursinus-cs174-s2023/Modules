---
layout: exercise_cpp
permalink: /CPPBasics/Exercise1
title: "CS174: C++ Basics Part 1"
excerpt: "CS174: C++ Basics Part 1"
canvasasmtid: "163976"
canvaspoints: "1.5"
canvashalftries: 5

info:
  prev: "./Video1"
  next: "./Video2"
  points: 1.5
  instructions: "Create a method printDivisibleBy6() which takes one argument, and which prints the numbers from 6 up to and including the specified argument that are divisible by 6.  Put exactly one space after each number.  The modulus % operator may help."
  goals:
    - Declare methods in C++
    - Work with loops in C++
    - Use basic print statements in C++
    
processor:  
  correctfeedback: "Correct!!" 
  incorrectfeedback: "Try again"
  submitformlink: false
  feedbackprocess: | 
    var pos = runtime.text.trim();
  correctcheck: |
    pos.includes("6 12 18 24 30 36 42 48 54 60 66 72 78 84 90 96 102 108 114 120 126 132 138 144 150 156 162 168 174 180 186 192 198 204 210 216 222 228 234 240 246 252 258 264 270 276 282 288 294 300 306 312 318 324 330 336 342 348 354 360 366 372 378 384 390 396 402 408 414 420 426 432 438 444 450 456 462 468 474 480 486 492 498 .6 12 18 24 30 36 42 48") 
  incorrectchecks:
    - incorrectcheck: |
        pos.includes("61218")
      feedback: "Try again. Please print exactly one space after each number."  
    
    - incorrectcheck: |
        pos.includes("0 6 12")
      feedback: "Try again.  Start looping at 6, not 0"

    - incorrectcheck: |
        pos.includes("6 12 18 24 30 36 42 48 54 60 66 72 78 84 90 96 102 108 114 120 126 132 138 144 150 156 162 168 174 180 186 192 198 204 210 216 222 228 234 240 246 252 258 264 270 276 282 288 294 300 306 312 318 324 330 336 342 348 354 360 366 372 378 384 390 396 402 408 414 420 426 432 438 444 450 456 462 468 474 480 486 492 498. 6 12 18 24 30 36 42 48")
      feedback: "Try again.  You're so close!  Be sure to put a space *after* each number instead of before"
 
files:
  - filename: "Student Code"
    name: student
    ismain: false
    isreadonly: false
    isvisible: true
    code: | 
        #include &ltstdio.h&gt

        // TODO: Fill in your printDivisibleBy6() method here


  - filename: "Main Area"
    name: main
    ismain: true
    isreadonly: true
    isvisible: true
    code: | 
      int main() {
          printDivisibleBy6(500);
          printf(".");
          printDivisibleBy6(50);
          printf("\n");
      }
        
---

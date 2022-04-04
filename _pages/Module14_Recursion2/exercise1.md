---
layout: exercise_cpp
permalink: /Module14/Exercise1
title: "CS174: Module 14: Recursion Towers of Hanoi"
excerpt: "CS174: Module 14: Recursion Towers of Hanoi"
canvasasmtid: "145659"
canvaspoints: "1"
canvashalftries: 5

info:
  prev: "./Video2"
  next: "./Video3"
  points: 1
  instructions: "The code below provides the beginning of a recursive implementation that counts the optimal number of moves needed.  Fill in the recursive calls to complete this method.  (If you enjoy this exercise, you might think about how you would use the C++ vector class make an animation to actually show the moves happening)."
  goals:
    - Use recursion to design an algorithm for computing a number
    
processor:  
  correctfeedback: "Correct!!" 
  incorrectfeedback: "Try again"
  submitformlink: false
  feedbackprocess: | 
    var pos = runtime.text.trim();
  correctcheck: |
    pos.includes("1 3 7 15 31 63 127 255 511")
  incorrectchecks:
    - incorrectcheck: |
        pos.includes("1 1 1 1 1 1 1 1 1")
      feedback: "Try again.  It looks like you haven't implemented the recursive call yet."
 
files:
  - filename: "Student Code"
    name: student
    ismain: false
    isreadonly: false
    isvisible: true
    code: | 
        #include &ltstdio.h&gt

        /**
         * A method to recursively compute how many moves
         * there are in an optimal solution to the towers of
         * hanoi problem
         * @param N Number of discs
         * @return Number of optimal moves needed to move discs
         */
        int h(int N) {
          if (N == 1) {
            return 1;
          }
          else {
            // TODO: Fill this in
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
            printf("%i ", h(N));
          }
          printf("\n");
          return 0;
      }
        
---

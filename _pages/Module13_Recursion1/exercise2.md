---
layout: exercise_cpp
permalink: /Module13/Exercise2
title: "CS174: Module 13: Recursion Exercise 2"
excerpt: "CS174: Module 13: Recursion Exercise 2"
canvasasmtid: "145658"
canvaspoints: "1"
canvashalftries: 5

info:
  prev: "./Video2"
  points: 1
  instructions: "The code below has a working recursive implementation of fibonacci, but it is slow.  Speed it up by storing the results of the computation in the array 'memory' so that they can be reused later without repeating recursion."
  goals:
    - Use recursion to design an algorithm for computing a number
    - Use dynamic programming and memoization to speed up a recursive algorithm
    
processor:  
  correctfeedback: "Correct!!" 
  incorrectfeedback: "Try again"
  submitformlink: false
  feedbackprocess: | 
    var pos = runtime.text.trim();
  correctcheck: |
    pos.includes("1 1 2 3 5 8 13 21 34") && pos.includes("counts = 23.")
  incorrectchecks:
    - incorrectcheck: |
        pos.includes("1 1 2 3 5 8 13 21 34") && pos.includes("counts = 167.")
      feedback: "Try again.  It looks like you aren't reusing computation.  Every time you compute something new you haven't seen before, store it in the x array"
 
files:
  - filename: "Student Code"
    name: student
    ismain: false
    isreadonly: false
    isvisible: true
    code: | 
        #include &ltstdio.h&gt

        int counts = 0;
        int memory[11] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};

        int fib(int N) {
          counts++;
          int result = 1;
          if (memory[N] != -1) {
            // If we remembered fib(N) previously, then pull it out
            result = memory[N];
          }
          else if (N > 2) {
            result = fib(N-1) + fib(N-2);
            // TODO: Remember the result here for use next time
            // so we don't have to compute it again
          }
          return result;
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
          printf("counts = %i.\n", counts);
          return 0;
      }
        
---

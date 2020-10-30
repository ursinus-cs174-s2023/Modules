---
layout: exercise_cpp
permalink: /Module7/Exercise2
title: "CS174: Module 7: C++ Addresses And Pointers: Exercise 2"
excerpt: "CS174: Module 7: C++ Addresses And Pointers: Exercise 2"
canvasasmtid: "102683"
canvaspoints: "1.5"
canvashalftries: 5

info:
  prev: "./Video3"
  next: "./Exercise3"
  points: 1.5
  instructions: "The \"filter\" method defined below takes in an array and creates a new, shorter version of it with only the even numbers from the original array.  Modify the method so that it takes a pointer to the size of an array as a reference variable.  It should then write the correct size to the value at this pointer's address before the method returns.  NOTE: size_t is simply a positive int type, which is used to indicate the size of an array."
  goals:
    - Work with pointers in C++
    - Return values by reference from methods in C++
    
processor:  
  correctfeedback: "Correct!!" 
  incorrectfeedback: "Try again"
  submitformlink: false
  feedbackprocess: | 
    var pos = runtime.text.trim();
    console.log("pos split length = " + pos.split(" ").length);
  correctcheck: |
    pos.includes("4 2 8 2 .2 4 6 8") && pos.split(" ").length == 8
  incorrectchecks:
    - incorrectcheck: |
        pos.includes("4 2 8 2 .2 4 6 8") && pos.split(" ").length == 12
      feedback: "Try again.  Be sure to reset the length of NOut at the beginning!"
    
    - incorrectcheck: |
        pos.includes("|.")
      feedback: "Try again.  If you're trying to add 1 to a value in a dereferenced pointer x, be sure to do (*x)++ and not *x++.  Alternatively, if you're not doing that, make sure you're setting the dereferenced pointer to be equal to the size at the end before it returns (because it looks like you have a size of 0)."
 
files:
  - filename: "Student Code"
    name: student
    ismain: false
    isreadonly: false
    isvisible: true
    code: | 
      #include &ltstdio.h&gt

      int* filter(int* x, size_t N) {
        // Step 1: Count how many elements are even
        size_t NOut = 0;
        for (int i = 0; i < N; i++) {
          if (x[i] % 2 == 0) {
            NOut++;
          }
        }
        // Step 2: Allocate new array and fill in even elements
        int* xout = new int[NOut];
        int idx = 0;
        for (int i = 0; i < N; i++) {
          if (x[i] % 2 == 0) {
            xout[idx] = x[i];
            idx++;
          }
        }
        return xout;
      }


  - filename: "Main Area"
    name: main
    ismain: true
    isreadonly: true
    isvisible: true
    code: | 
      void printArray(int* arr, int N) {
        for (int i = 0; i < N; i++) {
          printf("%i ", arr[i]);
        }
      }

      int main() {
          printf("\n|");
          int x1[] = {1, 9, 4, 5, 2, 3, 1, 8, 2, 13};
          size_t NOut = 0;
          int* xout = filter(x1, 10, &NOut);
          printArray(xout, NOut);
          delete[] xout;
          int x2[] = {1, 2, 3, 4, 5, 6, 7, 8};
          xout = filter(x2, 8, &NOut);
          printf(".");
          printArray(xout, NOut);
      }
        
---

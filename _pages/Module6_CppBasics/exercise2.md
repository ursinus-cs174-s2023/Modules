---
layout: exercise_cpp
permalink: /Module6/Exercise2
title: "CS174: Module 6: C++ Basics Part 2"
excerpt: "CS174: Module 6: C++ Basics Part 2"
canvasasmtid: "102600"
canvaspoints: "1.5"
canvashalftries: 5

info:
  prev: "./Video2"
  points: 1.5
  instructions: "Fill in the method int* reverseArray(int* arr, int N), which should dynamically allocate a new array of an appropriate size, fill this array in with the elements in arr in reverse, and return that array.  Note that the dynamically allocated array is de-allocated (deleted) in the main() to avoid memory leaks."
  goals:
    - Work with loops in C++
    - Declare dynamic arrays in C++
    - Fill in arrays in C++
    
processor:  
  correctfeedback: "Correct!!" 
  incorrectfeedback: "Try again"
  submitformlink: false
  feedbackprocess: | 
    var pos = runtime.text.trim();
  correctcheck: |
    pos.includes("1 0 3 3 7 1 .1 7 3 4 7 1 6 7 4")
 
files:
  - filename: "Student Code"
    name: student
    ismain: false
    isreadonly: false
    isvisible: true
    code: | 
        #include &ltstdio.h&gt

        /* 
         * Dynamically allocate a new array which is the reverse
         * of a specified array
         * @param arr The array to reverse
         * @param N The size of the array
         * @return the reversed array
         */
        int* reverseArray(int* arr, int N) {
          // TODO: Fill this in
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
          printf("\n");
          int arr1[] = {1, 7, 3, 3, 0, 1};
          int* rev = reverseArray(arr1, 6);
          printArray(rev, 6);
          delete[] rev;
          int arr2[] = {4, 7, 6, 1, 7, 4, 3, 7, 1};
          rev = reverseArray(arr2, 9);
          printf(".");
          printArray(rev, 9);
          return 0;
      }
        
---

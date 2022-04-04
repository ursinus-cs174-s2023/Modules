---
layout: exercise_cpp
permalink: /Module14/Exercise2
title: "CS174: Module 14: Recursive Binary Search"
excerpt: "CS174: Module 14: Recursive Binary Search"
canvasasmtid: "145660"
canvaspoints: "2"
canvashalftries: 5

info:
  prev: "./Video3"
  next: "./Video4"
  points: 2
  instructions: "Complete the recursive calls to create a working recursive implementation of binary search."
  goals:
    - Use recursion to implement binary search on a sorted array
    
processor:  
  correctfeedback: "Correct!!" 
  incorrectfeedback: "Try again"
  submitformlink: false
  feedbackprocess: | 
    var pos = runtime.text.trim();
  correctcheck: |
    pos.includes("0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16")
  incorrectchecks:
    - incorrectcheck: |
        pos.includes("-1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1")
      feedback: "Try again.  It looks like you are still returning not found for every number in the list"
 
files:
  - filename: "Student Code"
    name: student
    ismain: false
    isreadonly: false
    isvisible: true
    code: | 
        #include &ltstdio.h&gt

        /**
         * A recursive implementation of binary search on a sorted array
         * @param x The array to sort
         * @param i1 First index of range to consider
         * @param i2 Last index of range to consider
         * @param value Value under search
         * @return Index of value in the array, or -1 if it isn't there
         */
        int binarySearch(int* x, int i1, int i2, int value) {
            int index = -1;
            if (i1 == i2) {
                if (x[i1] == value) {
                    index = i1;
                }
            }
            else {
                // Find the halfway point, the "pivot"
                int mid = (i1+i2)/2;
                // Is the halfway point < value I'm looking for?
                if (x[mid] < value) {
                    // index = binarySearch(...)
                }
                else {
                    // index = binarySearch(...)
                }
            }
            return index;
        }


  - filename: "Main Area"
    name: main
    ismain: true
    isreadonly: true
    isvisible: true
    code: | 
      int main() {
          int x[17] = {0, 3, 8, 13, 14, 17, 19, 30, 32, 39, 41, 46, 53, 61, 70, 75, 82};
          for (int i = 0; i < 17; i++) {
            printf("%i ", binarySearch(x, 0, 16, x[i]));
          }
          printf("\n");
          return 0;
      }
        
---

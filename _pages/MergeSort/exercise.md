---
layout: exercise_cpp
permalink: /MergeSort/Exercise
title: "CS174: Merge Sort Exercise"
excerpt: "CS174: Merge Sort Exercise"
canvasasmtid: "146195"
canvaspoints: "2"
canvashalftries: 5

info:
  next: "./Exercise2"
  points: 2
  instructions: "Fill in the <code>merge</code> method to merge two sorted arrays into one larger sorted array, which is the key step to combine recursive problems in merge sort.  <a href = \"https://www.youtube.com/watch?v=_V-7NpSXuB4\">Click here</a> to watch a video I made on merge sort if you'd like some help with this step.  You can also watch a cute video <a href = \"https://www.youtube.com/watch?v=XaqR3G_NVoo\">here</a> on a dance for merge sort."
  goals:
    - Work with pointers and array indices in C++
    - Implement recursive methods
    - Implement merge sort
    
processor:  
  correctfeedback: "Correct!!" 
  incorrectfeedback: "Try again"
  submitformlink: false
  feedbackprocess: | 
    var pos = runtime.text.trim();
  correctcheck: |
    pos.includes("2 4 5 6 6 6 8 8 9 10 12 14 15 15 15 18 21 24 29 29 30 30 35 37 37 37 40 41 41 42 42 45 46 47 47 47 51 53 55 56 63 67 68 71 71 74 77 78 85 92 92 94 99 101 104 105 109 111 112 112 114 118 122 125 126 127 132 132 142 143 146 147 147 148 151 151 152 153 154 164 165 165 168 168 168 172 172 173 175 175 177 179 181 186 189 190 191 191 196 198")
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
    height: 1500
    code: | 
          #include &ltstdio.h&gt
          #include &ltcstring&gt

          /**
          * @brief Print the elements in an array, separated by spaces
          * 
          * @param x Array to print
          * @param N Length of array
          */
          void printArray(float* x, int N) {
              for (int i = 0; i < N; i++) {
                  printf("%g ", x[i]);
              }
              printf("\n");
          }

          /**
          * @brief Merge the sorted elements in A and the sorted elements into B
          *        into one full sorted list in the array y
          * 
          * @param A First sorted array
          * @param M Length of first sorted array
          * @param B Second sorted array
          * @param N Length of second sorted array
          * @param y Staging area, assumed to have length at least M+N.   
                     The merged solution should go here
          */
          void merge(float* A, int M, float* B, int N, float* y) {
              // TODO: Fill this in
          }

          /**
          * @brief A recursive helper function for merge sort
          * 
          * @param x The array to sort
          * @param N Length of the array
          * @param y Staging area, which is assumed to have length at least N
          */
          void mergeSortRec(float* x, int N, float* y) {
              if (N > 1) {
                  int mid = N/2;
                  float* A = x;
                  float* B = A+mid;
                  mergeSortRec(A, mid, y);
                  mergeSortRec(B, N-mid, y);
                  merge(A, mid, B, N-mid, y);
                  memcpy(x, y, N*sizeof(float));
              }
          }

          /**
          * @brief Entry point for sorting an array with merge sort.
          *        By the end of this method, the elements in x will be sorted 
          * 
          * @param x Array to sort
          * @param N Length of array
          */
          void mergeSort(float* x, int N) {
              float* y = new float[N]; // Staging area
              mergeSortRec(x, N, y);
              delete[] y;
          }


  - filename: "Main Area"
    name: main
    ismain: true
    isreadonly: true
    isvisible: true
    code: | 
          int main() {
              int N = 100;
              float x[100] = { 94, 112, 151, 125,   5,  24, 147,   2, 111, 168,  42, 148,  30,
                196, 173,  53,  47,  71,  63, 191,  29, 112,   8,  92,  15, 147,
                  92,  51,  15,  45,  30,   4,  15,  42, 153, 164, 132, 126, 122,
                  56,  21,   9, 114,  41,  10,   8, 146,  47,   6, 186, 191, 142,
                  85, 175, 132, 143, 165, 168,  68, 152,  37, 109, 165,  40, 104,
                172, 177,  74, 168,  46,  18,  77,  47,  55, 172, 190, 151,  12,
                  6, 101,  99,  71,  35, 189,  41, 181, 154, 127, 175, 118, 179,
                  29,  14,  37,  67, 198,  37,   6, 105,  78};
              mergeSort(x, N);
              printArray(x, N);
              return 0;
          }
        
---

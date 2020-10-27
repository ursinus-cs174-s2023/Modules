---
layout: exercise_cpp
permalink: /Module6/Exercise1
title: "CS174: Module 6: C++ Basics"
excerpt: "CS174: Module 6: C++ Basics"
canvasasmtid: "101709"
canvaspoints: "1"
canvashalftries: 5

info:
  prev: "./Video1"
  next: "./Video2"
  points: 1
  instructions: "Fill in the <code>removeByIndex</code> method that removes an element at a particular index in a LinkedList, if we assume that the elements are indexed starting at 0 at the head."
  goals:
    - Work with object references
    - Implement fundamental operations in collections/containers
    
processor:  
  correctfeedback: "Correct!!" 
  incorrectfeedback: "Try again"
  submitformlink: false
  feedbackprocess: | 
    var pos = runtime.text.trim();
  correctcheck: |
    pos.includes("1 6 10 5 0 .1 6 10 0 .1 10 0")
  incorrectchecks:
    - incorrectcheck: |
        pos.includes("1 6 8 10 5 0 .1 6 8 10 5 0 .1 6 8 10 5 0")
      feedback: "Try again. It looks like you're not actually removing anything from the list."  
 
files:
  - filename: "Student Code"
    name: student
    ismain: false
    isreadonly: false
    isvisible: true
    code: | 
        #include &ltstdio.h&gt

        void getPrimes(int N) {
            for (int i = 0; i < N; i++) {
                printf("%i ", i);
            }
        }


  - filename: "Main Area"
    name: main
    ismain: true
    isreadonly: true
    isvisible: true
    code: | 
      int main() {
          getPrimes(10);
      }
        
---

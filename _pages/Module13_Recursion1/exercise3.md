---
layout: exercise_cpp
permalink: /Module13/Exercise3
title: "CS174: Module 13: C++ Vectors: Exercise 3"
excerpt: "CS174: Module 13: C++ Vectors: Exercise 3"
canvasasmtid: "104635"
canvaspoints: "1"
canvashalftries: 5

info:
  prev: "./Video3"
  points: 1
  instructions: "The code below has a working recursive implementation of fibonacci, but it is slow.  Speed it up by storing the results of the computation in the array 'memory' so that they can be reused later without repeating recursion."
  goals:
    - Use the vector class in the C++ Standard Template Library
    - Manipulate object pointers and arrow notation in C++
    
processor:  
  correctfeedback: "Correct!!" 
  incorrectfeedback: "Try again"
  submitformlink: false
  feedbackprocess: | 
    var pos = runtime.text.trim();
  correctcheck: |
    pos.includes("1 2 3 4 5 6 7 .")
  incorrectchecks:
    - incorrectcheck: |
        pos.includes("1 2 3 .")
      feedback: "Try again.  It looks like you aren't adding the elements of v2 to the back of v1"
 
files:
  - filename: "Student Code"
    name: student
    ismain: false
    isreadonly: false
    isvisible: true
    code: | 
        #include &ltstdio.h&gt
        #include &ltvector&gt
        using namespace std;

        /**
        * Concatenate one vector onto the back of another one
        * @param first vector, passed by reference
        * @param second vector, passed by reference
        *                       All elements of this vector should be added directly
        *                       after the elements in v1
        */
        void concatenate(vector&ltint&gt* v1, vector&ltint&gt* v2) {
          for (size_t i = 0; i < v2->size(); i++) {
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
          vector&ltint&gt v1;
          v1.push_back(1);
          v1.push_back(2);
          v1.push_back(3);
          vector&ltint&gt v2;
          v2.push_back(4);
          v2.push_back(5);
          v2.push_back(6);
          v2.push_back(7);
          concatenate(&v1, &v2);
          for (int i = 0; i < v1.size(); i++) {
            printf("%i ", v1.at(i));
          }
          printf(".\n");
          return 0;
      }
        
---

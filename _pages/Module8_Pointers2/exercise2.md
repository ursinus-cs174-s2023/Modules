---
layout: exercise_cpp
permalink: /Module8/Exercise2
title: "CS174: Module 8: Pointers Continued: Exercise 2"
excerpt: "CS174: Module 8: Pointers Continued: Exercise 2"
canvasasmtid: "102837"
canvaspoints: "1"
canvashalftries: 5

info:
  prev: "./Video2"
  next: "./Video3"
  points: 1
  instructions: "Fill in a method that adds the string \"ROFL\" to the end of a string and returns the result."
  goals:
    - Work with string objects in C++
    
processor:  
  correctfeedback: "Correct!!" 
  incorrectfeedback: "Try again"
  submitformlink: false
  feedbackprocess: | 
    var pos = runtime.text.trim();
  correctcheck: |
    pos.includes("There was a major leak in Pfahler hall last week and faculty lost countless hours cleaning it up during a global pandemic.ROFL")
 
files:
  - filename: "Student Code"
    name: student
    ismain: false
    isreadonly: false
    isvisible: true
    code: | 
      #include &ltstdio.h&gt
      #include &ltstring&gt
      using namespace std;

      string makeROFL(string s) {
        // TODO: Fill this in
        return s;
      }


  - filename: "Main Area"
    name: main
    ismain: true
    isreadonly: true
    isvisible: true
    code: | 
      int main() {
          string s = makeROFL("There was a major leak in Pfahler hall last week and faculty lost countless hours cleaning it up during a global pandemic.");
          printf("%s.\n", s.c_str());
      }
        
---

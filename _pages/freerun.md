---
layout: freerun
permalink: /FreeRun
title: "CS174: C++ Practice"
excerpt: "CS174: C++ Practice"

info:
  instructions: "Enter in some C++ code below to practice."
  goals:
    - Practice C++
    
processor:  
  correctfeedback: "" 
  incorrectfeedback: ""
  submitformlink: false
  feedbackprocess: | 
    var pos = runtime.text.trim();
  correctcheck: |
    pos.includes("") 
 
files:
  - filename: "Main Area"
    name: main
    ismain: true
    isreadonly: false
    isvisible: true
    code: | 
      #include &ltstdio.h&gt
      
      int main() {
          printf("Hello world\n");
          return 0;
      }
        
---

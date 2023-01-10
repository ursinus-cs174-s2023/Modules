---
layout: exercise_cpp
permalink: /Ackermann/Exercise2
title: "CS174: Ackermann Function Memoization Exercise"
excerpt: "CS174: Ackermann Function Memoization Exercise"
canvasasmtid: "164011"
canvaspoints: "3"
canvashalftries: 5

info:
  prev: "./Exercise1"
  points: 3
  instructions: "Use memoization with a map data structure to speed up evaluation of the Ackermann function.  <a href = \"../../CoursePage/ClassExercises/Week10_Recursion/index.html#maps\">Click here</a> to review how memoization works using maps.  A map has been setup where the key is a string, and the value is the memoized function value of the Ackermann function.  A utility function has been provided called getKey to convert the two parameter inputs to ackermann into a string.  As a reminder, the definition is as follows:<p><img src = \"../images/Ackermann/AckermannFn.png\"></p>"
  goals:
    - Work with recursive functions in C++
    - Implement the ackermann function using recursive calls
    - Use memoization with hash maps to speed up recursive calls
    
processor:  
  correctfeedback: "Correct!!" 
  incorrectfeedback: "Try again"
  submitformlink: false
  feedbackprocess: | 
    var pos = runtime.text.trim();
  correctcheck: |
    pos.includes("7 (17). 61 (203).125 (583).") 
  incorrectchecks:
    - incorrectcheck: |
        pos.includes("7 (27). 61 (2459).125 (12766).")
      feedback: "Try again. Don't forget to save the result that you compute to memory, and/or don't forget to use a result that's already stored in memory instead of recomputing it!"  
 
files:
  - filename: "Student Code"
    name: student
    ismain: false
    isreadonly: false
    isvisible: true
    height: 1200
    code: | 
        #include &ltstdio.h&gt
        #include &ltmap&gt
        #include &ltstring&gt
        #include &ltsstream&gt

        using namespace std;

        /**
        * @brief Return a unique string key "m_n" to go
        *        with an ackermann input (m, n)
        * 
        * @param m First input to ackermann function
        * @param n Second input to ackermann function
        * @return string Key to use
        */
        string getKey(int m, int n) {
          stringstream stream;
          stream << m << "_" << n;
          return stream.str();
        }

        /**
        * @brief 
        * 
        * @param m First input to ackermann function
        * @param n Second input to ackermann function
        * @param count Reference to variable holding number of calls made to A
        * @param memory A map whose key is a string representation "m_n"
        *               and whose value is A(m, n)
        * @return int The ackermann function A(m, n)
        */
        int A(int m, int n, int* count, map&ltstring, int&gt& memory) {
          (*count)++;
          string s = getKey(m, n);
          int res = 0;
          if (m == 0) {
            res = n+1;
          }
          else if (n == 0) {
            res = A(m-1, 1, count, memory);
          }
          else {
            // TODO: Fill this in
          }
          return res;
        }


  - filename: "Main Area"
    name: main
    ismain: true
    isreadonly: true
    isvisible: true
    code: | 
      int main() {
        int count = 0;
        map&ltstring, int&gt memory;
        int res = A(2, 2, &count, memory);
        printf("%i (%i). ", res, count);
        
        memory.clear();
        res = A(3, 3, &count, memory);
        printf("%i (%i).", res, count);

        memory.clear();
        res = A(3, 4, &count, memory);
        printf("%i (%i).", res, count);

        printf("\n");
      }
        
---

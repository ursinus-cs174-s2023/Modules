---
layout: exercise_cpp
permalink: /LinkedList/Exercise1
title: "CS174: Linked List Exercise 1"
excerpt: "CS174: Linked List Exercise 1"
canvasasmtid: "103550"
canvaspoints: "1.5"
canvashalftries: 5

info:
  prev: "./Video1"
  next: "./Video1b"
  points: 1.5
  instructions: "In addition to a push_back method, the STL list class also has a push_front method to add things to the front of a list in constant time (i.e. without having to loop), regardless of the list size.  Use this method to fill a list with the reverse of the elements in another list"
  goals:
    - Work classes and objects in C++
    - Work with dynamic object references in C++
    - Work with STL classes in C++
    
processor:  
  correctfeedback: "Correct!!" 
  incorrectfeedback: "Try again"
  submitformlink: false
  feedbackprocess: | 
    var pos = runtime.text.trim();
  correctcheck: |
    pos.includes("81 64 49 36 25 16 9 4 1 0")
  incorrectchecks:
    - incorrectcheck: |
        pos.includes("4, 5, 6")
      feedback: "Try again.  It looks like you're still only adding elements at the end."
 
files:
  - filename: "Student Code"
    name: student
    ismain: false
    isreadonly: false
    isvisible: true
    height: 500
    code: | 
        #include &ltstdio.h&gt
        #include &ltlist&gt

        using namespace std;

        class IntWrapper {
            public:
                int x;
                IntWrapper(int x) {
                    this->x = x;
                }
        };
        
        /**
        * @brief Copy all of the elements from arr into arrRev in reverse
        * order by using the push_front method of the stl list
        * 
        * @param arr Original linked list
        * @param arrRev Linked list that will hold the reverse of the elements
        */
        void copyRev(list<IntWrapper*>& arr, list<IntWrapper*>& arrRev) {
            // TODO: Fill this in
        }


  - filename: "Main Area"
    name: main
    ismain: true
    isreadonly: true
    isvisible: true
    code: | 
        int main(int argc, char** argv) {
            int N = 10;
            list&lt;IntWrapper*&gt; arr;
            for (int i = 0; i < N; i++) {
                arr.push_back(new IntWrapper(i*i));
            }
            list&lt;IntWrapper*&gt; arrRev;
            copyRev(arr, arrRev);
            list&lt;IntWrapper*&gt;::iterator it;
            for (it = arrRev.begin(); it != arrRev.end(); it++) {
                IntWrapper* x = *it;
                printf("%i ", x->x);
            }
            printf("\n");
            for (it = arr.begin(); it != arr.end(); it++) {
                IntWrapper* x = *it;
                delete x;
            }
            return 0;
        }
        
---

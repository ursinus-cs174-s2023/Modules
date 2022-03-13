---
layout: exercise_cpp
permalink: /LinkedList/Exercise2
title: "CS174: Linked List Exercise 2"
excerpt: "CS174: Linked List Exercise 2"
canvasasmtid: "144447"
canvaspoints: "1.5"
canvashalftries: 5

info:
  prev: "./Video2"
  next: "./Video3"
  points: 1.5
  instructions: "Fill in the addFirst() method in the Linked List class.  If your program says running()...., then it probably means your in an infinite loop!  Be very careful of the order that you do things.  Write down an example on a piece of paper to check yourself."
  goals:
    - Work classes and objects in C++
    - Work with dynamic object references in C++
    - Implement data structures in C++
    
processor:  
  correctfeedback: "Correct!!" 
  incorrectfeedback: "Try again"
  submitformlink: false
  feedbackprocess: | 
    var pos = runtime.text.trim();
  correctcheck: |
    pos.includes("1 2 3 4 5 6")
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
    height: 1200
    code: | 
      #include &ltstdio.h&gt

      class Printable {
          public:
              virtual void print()=0;
      };


      class IntWrapper: public Printable {
          public:
              int x;
              IntWrapper(int x) {
                  this->x = x;
              }
              void print() {
                  printf("%i ", x);
              }
      };

      // Wrapper class around Printable reference that also holds arrows
      class LinkedNode {
          public:
              Printable* obj; // Object I'm wrapping
              LinkedNode* next; // Arrow to the next object
              LinkedNode(Printable* obj) {
                  this->obj = obj;
                  next = NULL;
              }
      };

      class LinkedList {
          private:
              LinkedNode* head;
          public:
              LinkedList() {
                  head = NULL;
              }
              ~LinkedList() {
                  LinkedNode* node = head;
                  while (node != NULL) {
                      LinkedNode* next = node->next;
                      delete node;
                      node = next;
                  }
              }
              void addFirst(Printable* obj) {
                  LinkedNode* node = new LinkedNode(obj);
                  if (head == NULL) {
                      // Edge case: The list is empty, so this new node becomes
                      // the head
                      head = node;
                  }
                  else {
                      // TODO: Fill this in.  Add this new node to the front
                  }
              }
              void printList() {
                  // Start at the head
                  LinkedNode* it = head;
                  while (it != NULL) {
                      it->obj->print();
                      it = it->next;
                  }
              }
      };


  - filename: "Main Area"
    name: main
    ismain: true
    isreadonly: true
    isvisible: true
    code: | 
      int main() {
          LinkedList list;
          for (int i = 6; i >= 1; i--) {
            list.addFirst(new IntWrapper(i));
          }
          printf("\n");
          list.printList();
      }
        
---

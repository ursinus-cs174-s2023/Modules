---
layout: exercise_cpp
permalink: /Module10/Exercise1
title: "CS174: Module 10: Object References / Linked Lists Exercise"
excerpt: "CS174: Module 10: Object References / Linked Lists Exercise"
canvasasmtid: "103550"
canvaspoints: "1.5"
canvashalftries: 5

info:
  prev: "./Video2"
  next: "./Video3"
  points: 1.5
  instructions: "Fill in the addFirst() method in the Linked List class."
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
    pos.includes("1, 2, 3, 4, 5, 6")
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
    code: | 
      #include &ltstdio.h&gt

      class Node {
        private:
            Node* next; // Arrow to next node
            int value;
        
        public:
            Node(int value) {
                // x->y
                // (*x).y
                this->value = value;
                next = nullptr;
            }
            void updateReference(Node* next) {
                this->next = next;
            }
            Node* getNext() {
                return this->next;
            }
            int getValue() {
                return this->value;
            }
            void setValue(int value) {
                this->value = value;
            }
      };

      class LinkedList {
          private:
              Node* head;
          public:
              LinkedList() {
                  head = nullptr;
              }

              ~LinkedList() {
                  while (head != nullptr) {
                      removeFirst();
                  }
              }

              bool isEmpty() {
                  return head == nullptr;
              }

              void addLast(int value) {
                  Node* newNode = new Node(value);
                  if (head == nullptr){
                      head = newNode;
                  }
                  else {
                      Node* node = head;
                      // Go until I find the end of the list
                      // where the arrow points to nothing
                      while (node->getNext() != nullptr) {
                          node = node->getNext();
                      }
                      node->updateReference(newNode);
                  }
              }

              void addFirst(int value) {
                // TODO: Fill this in
              }

              int removeFirst() {
                  int ret = -1;
                  if (head != nullptr) {
                      ret = head->getValue();
                      Node* newHead = head->getNext();
                      delete head;
                      head = newHead;
                  }
                  return ret;
              }

              void printList() {
                Node* node = head;
                while (node != nullptr) {
                  printf("%i", node->getValue());
                  if (node->getNext() != nullptr) {
                    printf(", ");
                  }
                  node = node->getNext();
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
          LinkedList L;
          L.addFirst(3);
          L.addFirst(2);
          L.addLast(4);
          L.addLast(5);
          L.addFirst(1);
          L.addLast(6);
          printf("\n");
          L.printList();
      }
        
---

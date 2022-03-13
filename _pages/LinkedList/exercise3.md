---
layout: exercise_cpp
permalink: /LinkedList/Exercise3
title: "CS174: Linked List Exercise 3"
excerpt: "CS174: Linked List Exercise 3"
canvasasmtid: "103550"
canvaspoints: "1.5"
canvashalftries: 5

info:
  prev: "./Video3"
  points: 2.5
  instructions: "Copy over your addFirst() code from the last exercise, then fill in the remove() method in the LinkedList class.  Beware again for infinite loops!  Make sure you are moving your node pointer along the arrows and remembering the last node."
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
    pos.includes(".2 4 5 .")
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
    height: 1400
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

                void remove(Printable* obj) {
                    if (head != NULL) {
                        // Only remove objects that exist
                        if (head->obj == obj) {
                            head = head->next;
                        }
                        else {
                            // The object might be somewhere in the middle
                            // TODO: Fill this in.  Remove the object reference
                            // if it exists in a node
                            
                        }
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
            int N = 10;
            IntWrapper x6(6);
            list.addFirst(&x6);
            IntWrapper x5(5);
            list.addFirst(&x5);
            IntWrapper x4(4);
            list.addFirst(&x4);
            IntWrapper x3(3);
            list.addFirst(&x3);
            IntWrapper x2(2);
            list.addFirst(&x2);
            IntWrapper x1(1);
            list.addFirst(&x1);


            list.remove(&x3);
            list.remove(&x1);
            list.remove(&x6);

            printf("\n.");
            list.printList();
            printf(".");
      }
        
---

---
layout: exercise_cpp
permalink: /LinkedMap/Exercise1
title: "CS174: Linked Map Module Exercise"
excerpt: "CS174: Linked Map Module Exercise"
canvasasmtid: "145391"
canvaspoints: "2"
canvashalftries: 5

info:
  prev: "./Video1"
  points: 2
  instructions: "Fill in the containsKey() method of the LinkedMap class.  Hint: Most of what you need is already in the get method, so you can just copy that code over and re-arrange it a bit."
  goals:
    - Work classes and objects in C++
    - Work with dynamic object references in C++
    - Implement abstract data types in C++
    
processor:  
  correctfeedback: "Correct!!" 
  incorrectfeedback: "Try again"
  submitformlink: false
  feedbackprocess: | 
    var pos = runtime.text.trim();
  correctcheck: |
    pos.includes("1010")
  incorrectchecks:
    - incorrectcheck: |
        pos.includes("0000")
      feedback: "Try again.  It looks like you're still returning false for all containsKey queries."
 
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

      template &ltclass K, class V&gt class Node {
          private:
              K key;
              V value;
              Node* next;
          public:
              Node(K key, V value) {
                  this-&gtkey = key;
                  this-&gtvalue = value;
                  next = nullptr;
              }
              void setNext(Node* next) {
                  this-&gtnext = next;
              }
              Node* getNext() {
                  return next;
              }
              void setKey(K key) {
                  this-&gtkey = key;
              }
              K getKey() {
                  return key;
              }
              void setValue(V value) {
                  this-&gtvalue = value;
              }
              V getValue() {
                  return value;
              }
      };

      template &ltclass K, class V&gt class LinkedMap {
          private:
              Node&ltK, V&gt* head;
              void removeFirst() {
                  Node&ltK, V&gt* oldHead = head;
                  head = head-&gtgetNext();
                  delete oldHead;
              }

          public:
              LinkedMap() {
                  head = nullptr;
              }
              ~LinkedMap() {
                  // Delete all nodes that have been allocated
                  while (head != nullptr) {
                      removeFirst();
                  }
              }

              /**
              * Put in a new &ltkey, value&gt pair
              */
              void put(K key, V value) {
                  // Add a new key/value pair at the beginning
                  Node&ltK, V&gt* newNode = new Node&ltK, V&gt(key, value);
                  if (head == nullptr) {
                      head = newNode;
                  }
                  else {
                      newNode-&gtsetNext(head);
                      head = newNode;
                  }
              }

              /* 
              * Find the value corresponding to a key
              */
              V get(K key) {
                  V ret;
                  Node&ltK, V&gt* node = head;
                  while (node != nullptr && node-&gtgetKey() != key) {
                      node = node-&gtgetNext();
                  }
                  if (node != nullptr) {
                      ret = node-&gtgetValue();
                  }
                  else {
                      printf("Warning: key not found\n");
                  }
                  return ret;
              }

              /**
                * Remove a key/value pair and return
                * the corresponding value
                */
              V remove(K key) {
                  V ret;
                  if (head != nullptr) {
                      if (head-&gtgetKey() == key) {
                          ret = head-&gtgetValue();
                          removeFirst();
                      }
                      else {
                          Node&ltK, V&gt* last = head;
                          Node&ltK, V&gt* node = head-&gtgetNext();
                          while (node != nullptr && !(node-&gtgetKey() == key)) {
                              last = node;
                              node = node-&gtgetNext();
                          } 
                          if (node != nullptr) {
                              ret = node-&gtgetValue();
                              last-&gtsetNext(node-&gtgetNext());
                          }
                      }
                  }
                  return ret;
              }

              /**
              * Return true if the map contains this key
              * or false otherwise
              */
              bool containsKey(K key) {
                  // TODO: Fill this in
                  return false;
              }


      };


  - filename: "Main Area"
    name: main
    ismain: true
    isreadonly: true
    isvisible: true
    code: | 
      int main() {
          LinkedMap&ltstring, int&gt L;
          L.put("james", 24);
          L.put("chris", 31);
          L.put("celia", 30);
          printf("\n");
          printf("%i", (int)L.containsKey("chris"));
          L.remove("chris");
          printf("%i", (int)L.containsKey("chris"));
          printf("%i", (int)L.containsKey("celia"));
          printf("%i", (int)L.containsKey("bear"));
          return 0;
      }
        
---

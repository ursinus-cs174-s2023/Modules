---
layout: exercise_cpp
permalink: /Maps/Exercise2
title: "CS174: LinkedMap containsKey() implementation"
excerpt: "CS174: LinkedMap containsKey() implementation"
canvasasmtid: "173705"
canvaspoints: "2"
canvashalftries: 5

info:
  prev: "./Video2"
  next: "./Video3"
  points: 2
  instructions: "Fill in the containsKey() method of the LinkedMap class.  Hint: Most of what you need is already in the get method, so you can just copy that code over and re-arrange it a bit.<p>NOTE ALSO: Homework 5 comes with an implementation of LinkedMap that uses abstract classes instead of templates, so this module can serve as a reference for how to do it with templates.</p>"
  goals:
    - Work classes and objects in C++
    - Implement abstract data types in C++
    - Implement a LinkedMap in C++
    
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
    height: 1500
    code: | 
        #include &lt;stdio.h&gt;
        #include &lt;string&gt;
        #include &lt;vector&gt;
        #include &lt;iostream&gt;

        using namespace std;

        template &lt;class K, class V&gt; class Node {
            private:
                K key;
                V value;
                Node&lt;K, V&gt;* next;
            public:
                Node(K key, V value) {
                    this-&gt;key = key;
                    this-&gt;value = value;
                    next = NULL;
                }
            template&lt;class A, class B&gt; friend class LinkedMap;
        };

        template &lt;class K, class V&gt; 
        class LinkedMap {
            private:
                Node&lt;K, V&gt;* head;
                V removeFirst() {
                    V ret;
                    if (head != NULL) {
                        ret = head-&gt;value;
                        Node&lt;K, V&gt;* oldHead = head;
                        head = head-&gt;next;
                        delete oldHead;
                    }
                    return ret;
                }

            public:
                LinkedMap() {
                    head = NULL;
                }
                ~LinkedMap() {
                    // Delete all nodes that have been allocated
                    while (head != NULL) {
                        removeFirst();
                    }
                }

                /**
                * Put in a new &lt;key, value&gt; pair
                */
                void put(K key, V value) {
                    // Add a new key/value pair to the collection
                    Node&lt;K, V&gt;* newNode = new Node&lt;K, V&gt;(key, value);
                    newNode-&gt;next = head;
                    head = newNode;
                }

                /**
                * Find the value corresponding value to a key
                * 
                * @param key The key we're looking up
                * @return V The corresponding value
                */
                V get(K key) {
                    V ret;
                    Node&lt;K, V&gt;* cursor = head;
                    while (cursor != NULL) {
                        if (cursor-&gt;key == key) {
                            ret = cursor-&gt;value;
                        }
                        cursor = cursor-&gt;next;
                    }
                    return ret;
                }

                /**
                * Look up whether a particular key is in the map
                * 
                * @param key Key we want to look up
                * @return true if the map contains this key
                * @return false if the map does not contain this key
                */
                bool containsKey(K key) {
                    // TODO: Fill this in
                    return false;
                }

                /**
                * Remove a key/value pair and return
                * the corresponding value
                * 
                * @param key Key of the entry we want to remove
                * @return V Value associated to the entry that's being removed
                */
                V remove(K key) {
                    V ret;
                    if (head != NULL) {
                        if (head-&gt;key == key) {
                            ret = head-&gt;value;
                            removeFirst();
                        }
                        else {
                            Node&lt;K, V&gt;* last = head;
                            Node&lt;K, V&gt;* node = head-&gt;next;
                            while (node != NULL && !(node-&gt;key == key)) {
                                last = node;
                                node = node-&gt;next;
                            } 
                            if (node != NULL) {
                                ret = node-&gt;value;
                                last-&gt;next = node-&gt;next;
                            }
                        }
                    }
                    return ret;
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

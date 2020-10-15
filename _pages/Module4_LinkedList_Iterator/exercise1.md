---
layout: exercise
permalink: /Module4/Exercise1
title: "CS174: Module 4: Linked List Exercise"
excerpt: "CS174: Module 4: Linked List Exercise"
canvasasmtid: "99537"
canvaspoints: "1"
canvashalftries: 5

info:
  prev: "./Video1"
  next: "./Video2"
  points: 1
  instructions: "Fill in the <code>removeByIndex</code> method that removes an element at a particular index in a LinkedList, if we assume that the elements are indexed starting at 0 at the head."
  goals:
    - Work with object references
    - Implement fundamental operations in collections/containers
    
processor:  
  correctfeedback: "Correct!!" 
  incorrectfeedback: "Try again"
  submitformlink: false
  feedbackprocess: | 
    var pos = feedbackString.trim();
  correctcheck: |
    pos.includes("1 6 10 5 0 .1 6 10 0 .1 10 0")
  incorrectchecks:
    - incorrectcheck: |
        pos.includes("1 6 8 10 5 0 .1 6 8 10 5 0 .1 6 8 10 5 0")
      feedback: "Try again. It looks like you're not actually removing anything from the list."  
 
files:
  - filename: "Student.java"
    name: student
    ismain: false
    isreadonly: false
    isvisible: true
    code: | 
            public class LinkedList {
                /*
                *  head ->  | value1 | -> | value2 | -> | value 3| -> null
                */
                /**
                * An "inner class" that's only accessible from within LinkedList.
                * This encapsulates what it means to be a node in a list
                */
                private class Node {
                    private Node next; // Reference to next node
                    private Integer value; // What's being stored in this node
                    /**
                    * Make a new node to store a particular value
                    * with a null next pointer by default
                    * @param value Value to store
                    */
                    public Node(Integer value) {
                        next = null;
                        this.value = value;
                    }
                    /**
                    * Update the reference pointer to point to this node
                    * @param newRef Node to which to point
                    */
                    public void updateReference(Node newRef) {
                        next = newRef;
                    }
                    /**
                    * Update the value stored at this node
                    * @param value Value to store
                    */
                    public void setValue(Integer value) {
                        this.value = value;
                    }
                    /**
                    * Return the Integer stored at this node
                    * @return Integer
                    */
                    public Integer getValue() {
                        return value;
                    }
                }

                private Node head; // All the linked list needs for us to 
                // iterate through it is a reference to the head node, 
                // which is null by defalut
                public LinkedList() {
                    head = null;
                }

                /**
                * Add a new node to the linked list.  If the list is empty (i.e.
                * the head is null), then simply make the head point to this new node.
                * Otherwise, walk through the list until we get to the end, and add
                * the new node there
                * @param value 
                */
                public void add(Integer value) {
                    Node newNode = new Node(value);
                    if (head == null){
                        head = newNode;
                    }
                    else {
                        Node node = head;
                        // Go until I find the end of the list
                        // where the arrow points to nothing
                        while (node.next != null) {
                            node = node.next;
                        }
                        node.updateReference(newNode);
                    }
                }

                /**
                * Output all of the elements in the list separated by a space
                */
                public String toString() {
                    String ret = "";
                    Node node = head;
                    while (node != null) {
                        ret += node.getValue() + " ";
                        node = node.next;
                    }
                    return ret;
                }

                /**
                * Delete the first Integer and return the value
                * that it was holding
                * NOTE: A constant time operation
                * 
                * head -> | first | -> |second| -> |third| -> ...
                * head = first, first.next = second, second.next = third
                * head -> |second| -> |third| -> ...
                * @return 
                */
                public Integer removeFirst() {
                    Integer value = head.value;
                    //Node first = head;
                    //Node second = first.next;
                    //head = second;
                    head = head.next;
                    return value;
                }

                /**
                * Remove the first occurrence of an Integer in the list
                * @param value Value to remove
                * @return The value if it was found, or null otherwise
                */
                public Integer removeByValue(Integer value) {
                    Integer ret = null;
                    if (head != null) {
                        if (head.value.equals(value)) {
                            ret = removeFirst();
                        }
                        else {
                            Node last = head;
                            Node node = head.next;
                            while (node != null && !node.value.equals(value)) {
                                last = node;
                                node = node.next;
                            }
                            if (node != null) {
                                ret = node.value;
                                last.next = node.next;
                            }
                        }
                    }
                    return ret;
                }

                /**
                * Remove the element that would be at index "index"
                * if we numbered them starting at 0 and following the arrows
                * @param index The index to remove
                * @return The value at that index
                */
                public Integer removeByIndex(int index) {
                    Integer ret = null;
                    if (index == 0) {
                        ret = removeFirst();
                    }
                    else {
                        Node last = head;
                        Node node = head.next;
                        for (int i = 1; i < index; i++) {
                            // TODO: Update last and node    
                        }
                        // TODO: change arrow coming out of last
                    }

                    return null;
                }
            }


  - filename: "Driver.java"
    name: tester
    ismain: false
    isreadonly: true
    isvisible: true
    code: | 
      public class Driver {
          public static void main(String[] args) {
            LinkedList list = new LinkedList();
            list.add(1);
            list.add(6);
            list.add(8);
            list.add(10);
            list.add(5);
            list.add(0);
            list.removeByIndex(2);
            String s1 = list.toString();
            list.removeByIndex(3);
            String s2 = list.toString();
            list.removeByIndex(1);
            String s3 = list.toString();
            System.out.println(s1+"."+s2+"."+s3);
          }
      }  

  - filename: "Excerpt from Main.java: body of main() function"
    ismain: true
    name: main
    isreadonly: true
    isvisible: false
    code: |
        Driver.main(null);
        
---

---
layout: exercise
permalink: /Module1/Exercise1
title: "CS174: Module 1: Classes Intro"
excerpt: "CS174: Module 1: Classes Intro"
canvasasmtid: "99371"
canvaspoints: "1"
canvashalftries: 5

info:
  prev: "./Video1"
  next: "./Video2"
  points: 1
  instructions: "Write a public instance method <code>celebrateBirthday()</code> that adds 1 to a person's age in a <code>Student</code> object.  The method should then return the new age as an int."
  goals:
    - Define instance methods of an object that change state
    
processor:  
  correctfeedback: "Correct!!" 
  incorrectfeedback: "Try again"
  submitformlink: false
  feedbackprocess: | 
    var pos = feedbackString.trim();
  correctcheck: |
    pos.includes("Name: Chris, Age: 32.Name: Celia, Age: 31.Name: James, Age: 24.32.31.24")
  incorrectchecks:
    - incorrectcheck: |
        pos.includes("Name: Chris, Age: 31.Name: Celia, Age: 30.Name: James, Age: 23.31.30.23")
      feedback: "Try again. Be careful add one to the age!"  
    - incorrectcheck: |
        pos.includes("undefined")
      feedback: "Try again. Be sure that your method has return type <code>int</code> and returns the new age!"  
 
files:
  - filename: "Student.java"
    name: student
    ismain: false
    isreadonly: false
    isvisible: true
    code: | 
      public class Student {
          private int age;
          private String firstName;
          private String lastName;
          
          // Constructor.  When I say new Student(), it will call this
          // method to intialize a new object of type student
          /**
          * @param a Age of student I'm making
          * @param f First name of student I'm making
          * @param l Last name of student I'm making
          */
          public Student(int a, String f, String l) {
              age = a;
              firstName = f;
              lastName = l;
          }
          
          public String getFullName() {
              return firstName + " " + lastName;
          }
          
          public String toString() {
              return "Name: " + firstName + ", Age: " + age;
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
              Student chris = new Student(31, "Chris", "Tralie");
              Student celia = new Student(30, "Celia", "Litovsky");
              Student james = new Student(23, "James", "Tralie");
              int age1 = chris.celebrateBirthday();
              int age2 = celia.celebrateBirthday();
              int age3 = james.celebrateBirthday();
              String res1 = chris.toString() + "." + celia.toString() + "." + james.toString();
              String res2 = age1 + "." + age2 + "." + age3;
              System.out.print(res1 + "." + res2);
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

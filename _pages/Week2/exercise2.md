---
layout: exercise
permalink: /Module1/Exercise2
title: "CS174: Module 1: Classes Static Types And Information Hiding"
excerpt: "CS174: Module 1: Classes Intro Static Types And Information Hiding"
canvasasmtid: "99372"
canvaspoints: "1"
canvashalftries: 5

info:
  prev: "./Video2"
  next: "./Video3"
  points: 1
  instructions: "Create a public static variable <code>numGraduated</code> as part of the <code>Student</code> class, and increment this variable every time a student graduates"
  goals:
    - Define a static variable and changes its state from an instance method
    
processor:  
  correctfeedback: "Correct!!" 
  incorrectfeedback: "Try again"
  submitformlink: false
  feedbackprocess: | 
    var pos = feedbackString.trim();
  correctcheck: |
    pos.includes("10.20")
  incorrectchecks:
    - incorrectcheck: |
        pos.includes("undefined")
      feedback: "Try again. Be sure you define a static int variable called <code>numGraduated</code> in the <code>Student</code> class."
 
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
          private String classYear;
          
          // Constructor.  When I say new Student(), it will call this
          // method to intialize a new object of type student
          /**
          * @param a Age of student I'm making
          * @param f First name of student I'm making
          * @param l Last name of student I'm making
          */
          public Student(int a, String f, String l, String cy) {
              age = a;
              firstName = f;
              lastName = l;
              classYear = cy;
          }
          
          public String getFullName() {
              return firstName + " " + lastName;
          }
          
          public void advanceClassYear() {
              if (areEqual(classYear, "Freshman")) {
                  classYear = "Sophomore";
              }
              else if (areEqual(classYear, "Sophomore")) {
                  classYear = "Junior";
              }
              else if (areEqual(classYear, "Junior")) {
                  classYear = "Senior";
              }
              else if (areEqual(classYear, "Senior")) {
                  classYear = "Graduated";
              }
              else {
                  System.out.println("Already graduated!");
              }
          }

          public String getClassYear() {
            return classYear;
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
              for (int i = 0; i < 10; i++) {
                Student s = new Student(21, "Test" + i, "Student", "Senior");
                s.advanceClassYear();
              }
              int g1 = Student.numGraduated;
              for (int i = 10; i < 20; i++) {
                Student s = new Student(21, "Test" + i, "Student", "Senior");
                s.advanceClassYear();
              }
              int g2 = Student.numGraduated;
              System.out.print(g1 + "." + g2);
          }
      }  

  - filename: "Excerpt from Main.java: body of main() function"
    ismain: true
    name: main
    isreadonly: true
    isvisible: false
    code: |
        Driver.main(null);

  - filename: "Utility.java"
    name: Utility
    ismain: false
    isreadonly: true
    isvisible: true
    code: | 
        // I had to define this method to get this to work in the 
        // browser, IT WILL NOT WORK IN JAVA, so please ignore it
        public boolean areEqual(String s1, s2) {
          return s1 === s2;
        }
        
---

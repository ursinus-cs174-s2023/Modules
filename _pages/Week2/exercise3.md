---
layout: exercise
permalink: /Module1/Exercise3
title: "CS174: Module 1: Classes, Static Methods, Arrays of Objects"
excerpt: "CS174: Module 1: Classes, Static Methods, Arrays of Objects"
canvasasmtid: "99373"
canvaspoints: "1"
canvashalftries: 5

info:
  prev: "./Video3"
  points: 1
  instructions: "Fill in the static method <code>makeStudents()</code> to return an array of 20 students, the first 10 of whom are freshmen, and the last 10 of whom are sophomores.  It does not matter what their age or name is, so you can pass anything you want for those fields in the constructor."
  goals:
    - Define a static variable and changes its state from an instance method
    
processor:  
  correctfeedback: "Correct!!" 
  incorrectfeedback: "Try again"
  submitformlink: false
  feedbackprocess: | 
    var pos = feedbackString.trim();
  correctcheck: |
    pos.includes("Freshmen.Freshmen.Freshmen.Freshmen.Freshmen.Freshmen.Freshmen.Freshmen.Freshmen.Freshmen.Sophomore.Sophomore.Sophomore.Sophomore.Sophomore.Sophomore.Sophomore.Sophomore.Sophomore.Sophomore") || pos.includes("Freshman.Freshman.Freshman.Freshman.Freshman.Freshman.Freshman.Freshman.Freshman.Freshman.Sophomore.Sophomore.Sophomore.Sophomore.Sophomore.Sophomore.Sophomore.Sophomore.Sophomore.Sophomore") || pos.includes("freshman.freshman.freshman.freshman.freshman.freshman.freshman.freshman.freshman.freshman.sophomore.sophomore.sophomore.sophomore.sophomore.sophomore.sophomore.sophomore.sophomore.sophomore")
  incorrectchecks:
    - incorrectcheck: |
        pos.includes("Freshmen.Freshmen.Freshmen.Freshmen.Freshmen.Freshmen.Freshmen.Freshmen.Freshmen.Freshmen.Freshmen.Freshmen.Freshmen.Freshmen.")
      feedback: "Try again. Be sure that the last 10 students are sophomores."
 
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
          // method to initialize a new object of type student
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

          public String getClassYear() {
            return classYear;
          }

          /**
           * Return an array of 20 students, the first 10 of whom
           * are freshmen and the last 10 of whom are sophomores
           */
          public static Student[] makeStudents() {
              Student[] s = new Student[20];
              // TODO: Fill this in
              return s;
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
            Student[] s = Student.makeStudents();
            for (int i = 0; i < s.length; i++) {
              System.out.print(s[i].getClassYear() + ".");
            }
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

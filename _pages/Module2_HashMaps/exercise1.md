---
layout: exercise
permalink: /Module2/Exercise1
title: "CS174: Module 1: Hash Maps Exercise 1"
excerpt: "CS174: Module 1: Hash Maps Exercise 1"
canvasasmtid: "99537"
canvaspoints: "1"
canvashalftries: 5

info:
  prev: "./Video1"
  next: "./Video2"
  points: 1
  instructions: "Fill in the static method <code>convertArrayToMap(Student[] sarray)</code> in the <code>Student</code> class, which takes in an array of students and creates a HashMap whose key is the Student's <b>last name</b> and whose value is the Student object.<BR><b>NOTE</b>: If you get <code>Error: map.get(...) is null</code>, then it means that it's not finding the keys it's looking for.  Be sure that your keys are the last name and not the first name.  Also be sure that you used the <code>put</code> method of <code>HashMap</code> to fill it in."
  goals:
    - Copy data from one type of collection to another
    - Put key/value pairs into a HashMap data structure
    
processor:  
  correctfeedback: "Correct!!" 
  incorrectfeedback: "Try again"
  submitformlink: false
  feedbackprocess: | 
    var pos = feedbackString.trim();
  correctcheck: |
    pos.includes("Allen Iverson.Jamal Murray.Kevin Durant")
  incorrectchecks:
    - incorrectcheck: |
        pos.includes("null")
      feedback: "Try again. Be sure that the key is the last name, not the first name!"  
 
files:
  - filename: "Student.java"
    name: student
    ismain: false
    isreadonly: false
    isvisible: true
    code: | 
      public class Student {
          /**
           * Convert an array of students into a HashMap, where the key is
           * the student's last name, and the value is the student object
           * @param sarray The array of students
           * @returns A hash map with key as the student last name and value as the student object
           **/
          public static HashMap&ltString, Student&gt convertArrayToMap(Student[] sarray) {
              HashMap&ltString, Student&gt studentMap = new HashMap<>();
              // TODO: Fill this in with a for loop
              return studentMap;
          }
          
          public static void printCelebrationInfo() {
              System.out.println("There have been " + numBirthdaysCelebrated + " birthdays");
          }
          
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
          
          public int getAge() {
              return age;
          }
          
          public String getFirstName() {
              return firstName;
          }
          
          public String getLastName() {
              return lastName;
          }
          
          public String getFullName() {
              return firstName + " " + lastName;
          }
          
          public String toString() {
              return "Name: " + getFullName() + ", Age: " + age + ", Class Year: " + classYear;
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
            Student[] s = new Student[20];
            s[0] = new Student(15, "John", "John", "Freshman");
            s[1] = new Student(15, "Jim", "Jim", "Freshman");
            s[2] = new Student(15, "Lebron", "James", "Freshman");
            s[3] = new Student(15, "Kevin", "Durant", "Freshman");
            s[4] = new Student(15, "Lamar", "Jackson", "Freshman");
            s[5] = new Student(16, "Serena", "Williams", "Sophomore"); 
            s[6] = new Student(16, "Skylar", "Diggins", "Sophomore");
            s[7] = new Student(16, "Christian", "Mccaffrey", "Sophomore");
            s[8] = new Student(16, "Juju", "Smith", "Sophomore");
            s[9] = new Student(16, "Jamal", "Murray", "Junior");
            s[10] = new Student(17, "Kyle", "Lowry", "Junior");
            s[11] = new Student(17, "Candace", "Parker", "Junior");
            s[12] = new Student(17, "Lisa", "Leslie", "Junior");
            s[13] = new Student(17, "Sue", "Bird", "Junior");
            s[14] = new Student(17, "Allen", "Iverson", "Senior");
            s[15] = new Student(18, "Carmelo", "Anthony", "Senior"); 
            s[16] = new Student(18, "Ant", "Davis", "Senior");
            s[17] = new Student(18, "Michael", "Jordan", "Senior");
            s[18] = new Student(18, "Steph", "Curry", "Senior");
            s[19] = new Student(18, "Charles", "Barkley", "Senior");

            HashMap&ltString, Student&gt map = Student.convertArrayToMap(s);
            String s1 = map.get("Iverson").getFullName();
            String s2 = map.get("Murray").getFullName();
            String s3 = map.get("Durant").getFullName();
            System.out.print(s1+"."+s2+"."+s3);
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

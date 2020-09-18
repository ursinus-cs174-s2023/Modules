---
layout: exercise
permalink: /Module2/Exercise2
title: "CS174: Module 1: Hash Maps Exercise 2 (Ungraded / For Practice)"
excerpt: "CS174: Module 1: Hash Maps Exercise 2 (Ungraded / For Practice)"

info:
  prev: "./Video2"
  instructions: "Fill in the static method <code>getAgeCount(HashMap<Integer, Student[]> studentMap, int age)</code> in the <code>Student</code> class.  This method takes in a HashMap whose keys are an <code>Integer</code> representing an age, and whose values are <code>Student[]</code> arrays of students, as well as an age of interest.  This method should return an int which says how many students are of the particular age."
  goals:
    - Manipulate key/value pairs into a HashMap data structure
    
processor:  
  correctfeedback: "Correct!!" 
  incorrectfeedback: "Try again"
  submitformlink: false
  feedbackprocess: | 
    var pos = feedbackString.trim();
  correctcheck: |
    pos.includes("5.4.3.2")
  incorrectchecks:
    - incorrectcheck: |
        pos.includes("0.0.0.0")
      feedback: "Try again. Looks like you're returning a length of 0 for every input."  
 
files:
  - filename: "Student.java"
    name: student
    ismain: false
    isreadonly: false
    isvisible: true
    code: | 
      public class Student {
          /**
           * Figure out how many students of a particular age you have 
           * @param studentMap A hash map with an Integer age as a key and
           *                   an array of Student objects who are that age
           *                   as its value
           * @param age The age we're interested in querying
           * @returns How many students there are of that age
           **/
          public static int getAgeCount(HashMap&ltInteger, Student[]&gt studentMap, int age) {
              // TODO: Fill this in
              return 0;
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
            
            HashMap&ltInteger, Student[]&gt studentMap = new HashMap<>();
            Student[] fifteenYearOlds = new Student[5];
            for (int i = 0; i < 5; i++) {
                fifteenYearOlds[i] = s[i];
            }
            studentMap.put(15, fifteenYearOlds);
            
            Student[] sixteenYearOlds = new Student[4];
            for (int i = 0; i < 4; i++) {
                sixteenYearOlds[i] = s[i+5];
            }
            studentMap.put(16, sixteenYearOlds);
            
            Student[] seventeenYearOlds = new Student[3];
            for (int i = 0; i < 3; i++) {
                seventeenYearOlds[i] = s[i+10];
            }
            studentMap.put(17, seventeenYearOlds);
            
            Student[] eighteenYearOlds = new Student[2];
            for (int i = 0; i < 2; i++) {
                eighteenYearOlds[i] = s[i+15];
            }
            studentMap.put(18, eighteenYearOlds);
            int c15 = Student.getAgeCount(studentMap, 15);
            int c16 = Student.getAgeCount(studentMap, 16);
            int c17 = Student.getAgeCount(studentMap, 17);
            int c18 = Student.getAgeCount(studentMap, 18);
            System.out.print(c15 + "." + c16 + "." + c17 + "." + c18);
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

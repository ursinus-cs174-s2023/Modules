---
layout: exercise
permalink: /MiscDrills/CharCounts
title: "CS174: OOP - Drills - Character Counting with HashMaps"
excerpt: "CS174: OOP - Drills - Character Counting with HashMaps"

info:
  instructions: "Fill in the method <code>countChars</code> that creates a HashMap whose keys are the unique characters in a given string and whose corresponding values are the number of occurrences of that character in the string."
  goals:
    - Put key/value pairs into a HashMap data structure
    - Use loops in concert with strings
    
processor:  
  correctfeedback: "Correct!!" 
  incorrectfeedback: "Try again"
  submitformlink: false
  feedbackprocess: | 
    var pos = feedbackString.trim();
  correctcheck: |
    pos.includes("o=3.e=3.l=3.t=1. =5")
 
files:
  - filename: "StringUtils.java"
    name: stringutils
    ismain: false
    isreadonly: false
    isvisible: true
    code: | 
      public class StringUtils {
          /**
           * Create a HashMap data structure whose keys are the unique
           * characters in a string and whose values are the number of
           * occurrences of each character in the string
           * @param s The string to process
           * @returns A hash map with key as the character and the value
           * as the count of that character
           **/
          public static HashMap&ltCharacter, Integer&gt countChars(String s) {
              HashMap&ltCharacter, Integer&gt countMap = new HashMap<>();
              // TODO: Fill this in with a for loop
              return countMap;
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
            String s = "hello and welcome to cs 173";
            HashMap&ltCharacter, Integer&gt countMap = StringUtils.countChars(s);
            System.out.print('o='+countMap.get('o'));
            System.out.print(".");
            System.out.print('e='+countMap.get('e'));
            System.out.print(".");
            System.out.print('l='+countMap.get('l'));
            System.out.print(".");
            System.out.print('t='+countMap.get('t'));
            System.out.print(".");
            System.out.print(' ='+countMap.get(' '));
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

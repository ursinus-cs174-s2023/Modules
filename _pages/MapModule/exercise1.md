---
layout: exercise_cpp
permalink: /Maps/Exercise1
title: "CS174: Choose Your Own Adventure"
excerpt: "CS174: Choose Your Own Adventure"
canvasasmtid: "173704"
canvaspoints: "1.5"
canvashalftries: 5

info:
  prev: "./Video1"
  next: "./Video2"
  points: 1.5
  instructions: "Add code to the <code>makeAdventure()</code> method to add a location <code>\"Kitchen\"</code> with the lore <p><code>\"The place where you heat up frozen food.\"</code> (be sure to include the <code>.</code>)</p> and arrows to <code>\"Office (START)\"</code> and <code>\"Upstairs Bedroom\"</code>"
  goals:
    - Work classes and objects in C++
    - Work with templates in C++
    - Use the map abstract data type in C++ to store information
    
processor:  
  correctfeedback: "Correct!!" 
  incorrectfeedback: "Try again"
  submitformlink: false
  feedbackprocess: | 
    var pos = runtime.text.trim();
  correctcheck: |
    pos.includes("Kitchen:The place where you heat up frozen food.,Office (START)|Upstairs Bedroom|")
  incorrectchecks:
    - incorrectcheck: |
        pos.includes("Office (START):The place where you frantically try to get everything ready for class.,Bathroom|Kitchen|")
      feedback: "Try again.  It looks like you still just have the Office in as a key, or you mistyped something in the strings."
 
files:
  - filename: "Student Code"
    name: student
    ismain: false
    isreadonly: false
    isvisible: true
    height: 800
    code: | 
        #include &lt;iostream&gt;
        #include &lt;iterator&gt;
        #include &lt;vector&gt;
        #include &lt;map&gt;
        #include &lt;string&gt;

        using namespace std;

        class Location {
            public:
                string lore;
                vector&lt;string&gt; arrows;

                Location(string lore, vector&lt;string&gt; arrows) {
                    this-&gt;lore = lore;
                    this-&gt;arrows = arrows;
                }
        };

        

        map&lt;string, Location&gt; makeAdventure() {
            map&lt;string, Location&gt; adventure;

            adventure.insert(pair&lt;string, Location&gt;(
            // Key
            "Office (START)", 
            
            // Value
            Location(
                "The place where you frantically try to get everything ready for class.",  
                vector&lt;string&gt;{"Bathroom", "Kitchen"}))
            );

            // TODO: Fill this in

            return adventure;
        }


  - filename: "Main Area"
    name: main
    ismain: true
    isreadonly: true
    isvisible: true
    height: 400
    code: | 
            int main() {
                // Keys: String names of the rooms
                // Values: vector&lt;string&gt; {Information about place, arrow 1, arrow 2, ...}
                
                map&lt;string, Location&gt; adventure = makeAdventure();

                map&lt;string, Location&gt;::iterator it;
                for (it = adventure.begin(); it != adventure.end(); it++) {
                    printf("%s:", it-&gt;first.c_str());
                    Location location = it-&gt;second;
                    printf("%s,", location.lore.c_str());
                    for (size_t i = 0; i &lt; location.arrows.size(); i++) {
                        printf("%s|", location.arrows[i].c_str());
                    }
                }
                printf("\n");
            }
        
---

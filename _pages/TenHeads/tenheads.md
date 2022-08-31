---
layout: freerun
permalink: /TenHeads
title: "CS174: Ten Heads in A Row"
excerpt: "CS174: Ten Heads in A Row"

info:
  instructions: "Fill in the method <code>doTenHeadsExperiment</code> to flip a coin until you get 10 heads in a row.  Print how many flips it took to get it.  If you've done it correctly, it should take 1819 flips.  In class, we'll play with the variable <code>x0</code> to change the sequence of heads/tails"
  goals:
    - Work with nested loops in C++
    - Work with conditionals in C++
    - Work with multiple variables in concert in C++
    - Use basic print statements in C++
    
processor:  
  correctfeedback: "Correct!!" 
  incorrectfeedback: "Try again"
  submitformlink: false
  feedbackprocess: | 
    var pos = runtime.text.trim();
  correctcheck: |
    pos.includes("6 12 18 24 30 36 42 48 54 60 66 72 78 84 90 96 102 108 114 120 126 132 138 144 150 156 162 168 174 180 186 192 198 204 210 216 222 228 234 240 246 252 258 264 270 276 282 288 294 300 306 312 318 324 330 336 342 348 354 360 366 372 378 384 390 396 402 408 414 420 426 432 438 444 450 456 462 468 474 480 486 492 498 .6 12 18 24 30 36 42 48") 
  incorrectchecks:
    - incorrectcheck: |
        pos.includes("61218")
      feedback: "Try again. Please print exactly one space after each number."  
    
    - incorrectcheck: |
        pos.includes("0 6 12")
      feedback: "Try again.  Start looping at 6, not 0"

    - incorrectcheck: |
        pos.includes("6 12 18 24 30 36 42 48 54 60 66 72 78 84 90 96 102 108 114 120 126 132 138 144 150 156 162 168 174 180 186 192 198 204 210 216 222 228 234 240 246 252 258 264 270 276 282 288 294 300 306 312 318 324 330 336 342 348 354 360 366 372 378 384 390 396 402 408 414 420 426 432 438 444 450 456 462 468 474 480 486 492 498. 6 12 18 24 30 36 42 48")
      feedback: "Try again.  You're so close!  Be sure to put a space *after* each number instead of before"
 
files:
  - filename: "Pseudorandom Number Generator"
    name: prng
    ismain: false
    isreadonly: true
    isvisible: true
    code: | 
        #include &ltstdio.h&gt

        class LCGRand {
            private:
                int a, m, c, x;
            public:
                /**
                * @brief Construct a new Linear Congruential Generator object
                * 
                * @param m Modulus
                * @param a Multiplier
                * @param c Additive constant
                * @param x0 Initial state
                */
                LCGRand(int m, int a, int c, int x0) {
                    this->m = m;
                    this->a = a;
                    this->c = c;
                    this->x = x0;
                }

                /**
                * @brief Return the next random variable
                * 
                * @return int 
                */
                int nextRand() {
                    x = (a*x + c) % m;
                    return x;
                }

                /**
                * @brief Do a coin flip
                * 
                * @return true / false
                */
                bool coinFlip() {
                    return nextRand()%2 == 0;
                }
        };

  - filename: "Student Code"
    name: student
    ismain: false
    isreadonly: false
    isvisible: true
    height: 800
    code: | 
        void doTenHeadsExperiment() {
          int x0 = 0; // Change this for a different outcome
          LCGRand rand(65537, 75, 74, x0);
          // TODO: Fill in your ten heads experiment code here

          // This is just a sample to show you how to flip a coin
          if (rand.coinFlip()) {
            printf("Heads!\n");
          }
          else {
            printf("Tails!\n");
          }
          ///////////////////
        }


  - filename: "Main Area"
    name: main
    ismain: true
    height: 100
    isreadonly: true
    isvisible: true
    code: | 
      int main() {
          doTenHeadsExperiment();
      }
        
---

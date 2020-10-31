---
layout: module
permalink: /Module8/Video3
title: "CS174: Module 8: C++ Pointers Continued: Video 3"
excerpt: "CS174: Module 8: C++ Pointers Continued: Video 3"

info:
  next: "./Exercise3"
  prev: "./Exercise2"
  
---

Please watch the video below, and click the next button once you have finished

<iframe width="560" height="315" src="https://www.youtube.com/embed/pb9eSVHDjiM" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>

<h1>Notes</h1>
<ul>
<li>2D arrays in C++ are arrays of arrays, and are declared with <code>**</code>.  Otherwise, syntax to access their elements is very similar to that in Java.</li>
<li>To dynamically allocate a 2D array in C++, it's necessary to manually allocate each row in a loop.  To clean it up, we must then de-allocate (<code>delete[]</code>) each row before de-allocating the array.</li>
<li>Command line arguments are passed in as <code>int main(int argc, char** argv)</code>, or as an array of character arrays.  One can convert a c-array representing an integer to an int with the <code>atoi()</code> method in the <code>stdlib</code> library.</li>
</ul>
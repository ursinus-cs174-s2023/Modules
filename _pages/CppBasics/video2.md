---
layout: module
permalink: /CPPBasics/Video2
title: "CS174: C++ Basics Part 2"
excerpt: "CS174: C++ Basics Part 2"

info:
  next: "./Exercise2"
  prev: "./Exercise1"
  
---

Please watch the video below, and click the next button once you have finished

<iframe width="560" height="315" src="https://www.youtube.com/embed/hSqE54RQXbM" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>

<h1>Notes</h1>
<ul>
<li>Declare a fixed array in C++ with the angle brackets <b>after</b> the variable name.  For instance, <p><code>int arr[] = {1, 2, 3}</code></p></li>
<li>C++ <b>does not</b> keep track of the size of arrays, so you have to store this as a separate variable.  </li>
<li>If you go out of bounds of the array, C++ does not warn you; it simply pulls stuff out of memory next to that array, which could look random, or it crashes with a <code>Segmentation Fault</code>, indicating that you're trying to access invalid memory</li>
<li>To <i>dynamically allocate</i> a new array at runtime, you have to declare it using the * notation, so <p><code>int* arr = new int[10];</code></p> </li>
</ul>
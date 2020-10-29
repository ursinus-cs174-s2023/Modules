---
layout: module
permalink: /Module7/Video3
title: "CS174: Module 7: C++ Addresses And Pointers: Video 3"
excerpt: "CS174: Module 7: C++ Addresses And Pointers: Video 3"

info:
  next: "./Exercise2"
  prev: "./Video2"
  
---

Please watch the video below, and click the next button once you have finished

<iframe width="560" height="315" src="https://www.youtube.com/embed/SUrQekjsj-s" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>

<h1>Notes</h1>
<ul>
<li>There's a variable type meant to store a memory address called a pointer, and it's referred to with a *.  So, for example, <code>int* xptr = &x;</code> stores the address of <code>x</code> in the pointer <code>xptr</code></li>
<li>One can <b>dereference</b> a pointer, or go to the appropriate address in memory, also with the * command.  So, for instance, <code>(*xptr)++</code> would go to the memory address of x and add 1 to the value at that memory address.</li>
<li>Arrays are actually just pointers, and technically the code <code>arr[i]</code> is shorthand for dereferencing an address <b>i</b> steps ahead of the start of the array with the code <code>*(arr+i)</code>.</li>
</ul>
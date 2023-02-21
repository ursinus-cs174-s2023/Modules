---
layout: module
permalink: /CppInheritance/Video1
title: "CS174: Classes And Inheritance: public, private, static"
excerpt: "CS174: Classes And Inheritance: public, private, static"

info:
  next: "./Video2"
  
---

Please watch the video below, and click the next button once you have finished

<iframe width="560" height="315" src="https://www.youtube.com/embed/mhPDx0cDG8c" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>

<h1>Notes</h1>
<ul>
<li>
  <code>private</code> variables in a class can only be accessed from within class member methods.  This is one mechanism we have for <b>information hiding</b>, or the process of only letting users of our class know what they need to know to avoid confusing them, and also so we have controlled access points to variables where we can do bounds checking, etc at runtime.  This all leads to better, more robust code</li>
<li>
  Variables or methods declared as <code>static</code> within a class belong <i>to the whole class</i>, not to an individual object.  For instance, we can have a static variable that counts how many objects of this class have been instantiated.
</li>
</ul>
---
layout: module
permalink: /Module9/Video2
title: "CS174: Module 9: Class Destructors"
excerpt: "CS174: Module 9: Class Destructors"

info:
  next: "./Exercise2"
  prev: "./Exercise1"
  
---

Please watch the video below, and click the next button once you have finished

<iframe width="560" height="315" src="https://www.youtube.com/embed/jhwpyssd46U" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>

<h1>Notes</h1>
<ul>
<li>Every class has a <b>destructor</b> which is called right before an object of that class is deleted.  It is declared with the tilde notation</li>
<li>Static objects are destructed automatically at the end of the method in which they were declared.  Dynamic objects have to be destructed manually by calling <code>delete</code>, just like dynamic arrays.  Be sure to delete your dynamic objects after you're finished using them to avoid memory leaks!</li>
</ul>
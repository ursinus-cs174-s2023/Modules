---
layout: module
permalink: /Module12/Video2
title: "CS174: Module 12: C++ Inheritance: Object Slicing And Runtime Polymorphism"
excerpt: "CS174: Module 12: C++ Inheritance: Object Slicing And Runtime Polymorphism"

info:
  next: "./Exercise2"
  prev: "./Exercise1"
---

Please watch the video below, and click the next button once you have finished

<iframe width="560" height="315" src="https://www.youtube.com/embed/FKi3KfeXeCE" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>

<h2>Notes</h2>
<ul>
<li>Deep copies of a subclass to one of its parent classes will do <b>object slicing</b>, where it simply deletes all of the fields that aren't part of the superclass in the copy.  So we have to be careful here.</li>
<li>By default, casting object pointers/references as a parent class reference type invokes the parent class methods.  To achieve runtime polymorphism, we need to use the <code>virtual</code> keyword before the method definition in the parent class.</li>
</ul>

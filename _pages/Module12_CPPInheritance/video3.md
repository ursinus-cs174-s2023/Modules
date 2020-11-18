---
layout: module
permalink: /Module12/Video3
title: "CS174: Module 12: C++ Inheritance: Abstract Methods And Multiple Inheritance"
excerpt: "CS174: Module 12: C++ Inheritance: Abstract Methods And Multiple Inheritance"

info:
  prev: "./Exercise2"
---

Please watch the video below, and you will be finished once it is complete.

<iframe width="560" height="315" src="https://www.youtube.com/embed/C-m_8gVUfGA" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>

<h2>Notes</h2>
<ul>
<li>If a parent class defined a method as <code>virtual type method(args) = 0;</code>, then that method is <b>pure virtual</b>.  This means that classes that inherit from this class <b>must</b> override these methods if we plan to use their objects.  In this way, the use of pure virtual methods in C++ is like interfaces in Java.</li>
<li>A single pure virtual method turns the class into an <b>abstract</b> class, meaning only derived classes that implement this method can be used.  If a subclass does not implement the pure virtual methods, then it is also abstract.</li>
<li>It is possible to perform multiple inheritance in C++ by typing <code>class Subclass: public Parent1, public Parent2, ...</code></li>
</ul>

---
layout: module
permalink: /Module9/Video1
title: "CS174: Module 9: Intro To C++ Classes"
excerpt: "CS174: Module 9: Intro To C++ Classes"

info:
  next: "./Exercise1"
---

Please watch the video below, and click the next button once you have finished (NOTE: This video ends abruptly because I decided to split it up)

<iframe width="560" height="315" src="https://www.youtube.com/embed/xGswsATm6SY" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>

<h2>Notes</h2>
<ul>
<li>Classes in C++ are declared with the <code>class</code> keyword, just as in Java, but they need a semicolon after the closing bracket.</li>
<li>Public and private variables/methods are all declared together in blocks.  The public block is denoted by <code>public:</code>, and the private block is denoted by <code>private:</code></li>
<li>Constructors are defined just as they are in Java, except they don't need <code>void</code> in front of them</li>
<li>A <b>static object</b> of a class <code>MyClass</code> is defined as <p><code>MyClass myObject(constructor parameters...);</code></p></li>
<li>A <b>dynamic object</b> of a class <code>MyClass</code> is defined as the reference <p><code>MyClass* myObject = new MyClass(constructor parameters...);</code></p>We have to then remember to say <code>delete myObject</code> to <b>de-allocate</b> the object once we're finished with it, since dynamic objects (like dynamic arrays) are not de-allocated automatically.</li>
<li>A shorthand for accessing instance variables and methods in an object reference <code>ref</code> is the arrow notation <code>ref->field</code></li>
<li>The <code>this</code> keyword within an object is a reference/pointer to the object, so we need to use the arrow notation if we want to access variables in <code>this</code></li>
</ul>

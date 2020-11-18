---
layout: module
permalink: /Module12/Video1
title: "CS174: Module 12: C++ Inheritance: Basics"
excerpt: "CS174: Module 12: C++ Inheritance: Basics"

info:
  next: "./Exercise1"
---

Please watch the video below, and click the next button once you have finished

<iframe width="560" height="315" src="https://www.youtube.com/embed/2T4GBl_hAQc" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>

<h2>Notes</h2>
<ul>
<li>The syntax <code>class Child: public Parent</code> is the basic syntax for inheriting the class <code>Parent</code> in the class <code>Child</code></li>
<li>A constructor <code>Child(args): Parent(args)</code> is the syntax for calling a parent class constructor while defining the child constructor.</li>
<li><code>protected</code> works the same way as it does in Java, we just need to define all protected variables in their own <code>protected:</code> block</li>
<li>Methods can be overridden, and the method versions of the parent class can be called with the <code>Parent::method</code> syntax</li>
</ul>

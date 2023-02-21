---
layout: module
permalink: /CppInheritance/Video2
title: "CS174: Classes And Inheritance: The Inheritance Concept"
excerpt: "CS174: Classes And Inheritance: The Inheritance Concept"

info:
  next: "./Exercise1"
  prev: "./Video1"
  
---

Please watch the video below, and click the next button once you have finished

<iframe width="560" height="315" src="https://www.youtube.com/embed/RNHn-agVBPI" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>

<h1>Notes</h1>
<ul>
<li>Another important concept in object oriented programming is that of <code>code sharing</code>.  One way of doing this is via <code>inheritance</code>.  We start with a prototype class, which is known as a <code>parent class</code> or <code>base class</code>, and then we create a <code>child class</code> or <code>derived class</code> which <code>inherits</code> from our parent class.  This means that all of the methods we declared in the parent class get copied into the child class.</li>
<li>
For now, we'll use the syntax <code>Child:public Parent{ ... }</code> to create a class <code>Child</code> which inherits from <code>Parent</code>.
</li>
<li>
We can use the syntax <code>Child(arg1, arg2):Parent(arg1, arg2) { ...}</code> to call the constructor of the parent class at the beginning of the child constructor.  It is necessary to specify how the parent class's constructor will be called up front.
</li>
<li>
If we redefine a method in a child class with the same name as that in the parent class, the we are <code>overriding</code> the method in the parent class.  When we then call this method on an instance of the child class, it will use the new overridden version.
</li>
<li>
We can use the method <code>Parent::method()</code> to call the parent's version of a method
</li>
<li>
Variables that are declared <code>private</code> in a parent class cannot be accessed directly outside of an object of type parent class, nor in child classes.  By contrast, variables declared <code>protected</code> in a parent class can still not be accessed outside of the child or the parent class, but they <code>can</code> be accessed directly in child classes.
</li>
</ul>
---
layout: module
permalink: /ClassesBasics/Video3
title: "CS174: Dynamic Object Allocation"
excerpt: "CS174: Dynamic Object Allocation"

info:
  prev: "./Exercise2"
  next: "./Exercise3"
---

Watch the video below, and click the next button once you have finished

<iframe width="560" height="315" src="https://www.youtube.com/embed/I6Uy9yxwLcY" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; web-share" allowfullscreen></iframe>

<h1>Notes</h1>
<ul>
<li>Just like we can with primitive type instances, we can dynamically allocate memory for objects from the heap using <code>new</code></li>
<li>While statically declared objects are instantiated as <code>ClassName obj(param1, param2, ..)</code>, dynamically declared objects are instantiated as <code>ClassName* obj = new ClassName(param1, param2, ...)</code>.  Just as with primitive types, the new returns a <b>pointer</b> to the dynamically allocated memory.</li>
</ul>
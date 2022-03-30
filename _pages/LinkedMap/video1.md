---
layout: module
permalink: /LinkedMap/Video1
title: "CS174: Linked Map Module"
excerpt: "CS174: Linked Map Module"

info:
  next: "./Exercise1"
---

Please watch the video below, and click the next button once you have finished

<iframe width="560" height="315" src="https://www.youtube.com/embed/6vFV-kMUsE4" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>

<h2>Notes</h2>
<ul>
<li>An abstract data type (ADT) is an API for a data type.  It is up to the programmer to choose how to implement it on the back end, and they should use information hiding with private variables to hide those details from methods that use this data type.</li>
<li>We can implement an abstract data type for a map that uses a linked list on the back-end.  All we have to do is store two pieces of information in the node instead of just a value.</li>
<li>We should take care to remove all of the nodes we dynamically allocated when the object is destructed.</li>
</ul>

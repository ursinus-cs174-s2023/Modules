---
layout: module
permalink: /DoublyLinkedList/Video0
title: "CS174: Stack And Queue ADTs"
excerpt: "CS174: Stack And Queue ADTs"

info:
  next: "./Video1"
---

Watch the video below on the <code>Stack</code> and <code>Queue</code> abstract data types.  Code can be found at <a href = "https://github.com/ursinus-cs174-s2023/Week9_Stack_Queue">this link</a>.

<iframe width="560" height="315" src="https://www.youtube.com/embed/71lqHJtNRHk" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; web-share" allowfullscreen></iframe>

<h2>Notes</h2>

<ul>
<li><p>An abstract data type (ADT) is a specification of functionality of a data container, without specifying <b>how</b> it's actually going to work.</p></li>
<li><p>A <code>Stack</code> is an abstract data type which is Last In First Out (LIFO); that is, we add something to the top of it with <code>push()</code>, and we remove what's at the top with <code>pop()</code>.  In other words, we remove and add from the same place</p></li>
<li><p>A <code>Stack</code> can be implemented efficiently with an <b>underlying singly-<code>LinkedList</code></b></p></li>
<li><p>A <code>Queue</code> is an abstract data type which is First In First Out (FIFO); that is, we add something to the end of the line with <code>enqueue()</code>, and we remove what's at the front of the line with <code>dequeue()</code></p></li>
<li><p>We cannot implement a <code>Queue</code> efficiently with a singly-linked list, because adding to the end of a singly-linked list is expensive; we have to loop through all elements of the list until we get there.</p></li>
</ul>

<h2>Code</h2>

<a href = "https://github.com/ursinus-cs174-s2023/Week9_Stack_Queue">Click here</a> to see the code from the video
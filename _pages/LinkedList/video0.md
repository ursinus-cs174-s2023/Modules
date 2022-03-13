---
layout: module
permalink: /LinkedList/Video0
title: "CS174: Static (Stack) vs Dynamic (Heap) Object Review"
excerpt: "CS174: Static (Stack) vs Dynamic (Heap) Object Review"

info:
  next: "./Video1"
---

Watch the video below that I dug up from fall 2020 to help you warm back up after spring break on static vs dynamic objects

<iframe width="560" height="315" src="https://www.youtube.com/embed/0ekFIqdlk3g" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>

<h2>Notes</h2>
<ul>
<li>Object reference pitfall 1: you should only delete objects that you've allocated dynamically with a <code>new</code></li>
<li>Object reference pitfall 2: Since object values declared in a method are deleted when the method completes, you will get a segfault if you return and try to use references to them.</li>
</ul>

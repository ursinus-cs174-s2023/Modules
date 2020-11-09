---
layout: module
permalink: /Module10/Video1
title: "CS174: Module 10: Object References / Linked Lists"
excerpt: "CS174: Module 10: Object References / Linked Lists"

info:
  next: "./Video2"
---

Please watch the video below, and click the next button once you have finished

<iframe width="560" height="315" src="https://www.youtube.com/embed/0ekFIqdlk3g" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>

<h2>Notes</h2>
<ul>
<li>Object reference pitfall 1: you should only delete objects that you've allocated dynamically with a <code>new</code></li>
<li>Object reference pitfall 2: Since object values declared in a method are deleted when the method completes, you will get a segfault if you return and try to use references to them.</li>
</ul>

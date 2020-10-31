---
layout: module
permalink: /Module8/Video2
title: "CS174: Module 8: C++ Pointers Continued: Video 2"
excerpt: "CS174: Module 8: C++ Pointers Continued: Video 2"

info:
  next: "./Exercise2"
  prev: "./Exercise1"
  
---

Please watch the video below, and click the next button once you have finished

<iframe width="560" height="315" src="https://www.youtube.com/embed/hz1uj1xgES0" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>

<h1>Notes</h1>
<ul>
<li>If you declare your own <code>char*</code> array and you don't include the null terminator, then <code>printf("%s", ..)</code> will keep printing things in memory until it encounters a 0.</li>
<li>The standard library in C++ class includes a <code>string</code> class that makes strings more like they are in Java.  We import it with <code>#include < string ></code> directive.  Then, string concatenation is as simple as <code>s1 + s2</code></li>
<li>It is possible to obtain a read-only pointer to the character array for a <code>string</code> object with the <code>c_str()</code> instance method.</li>
<li><code>count << string1 << string2 << ...</code> is an object-oriented, C++ style way of printing things out</li>
</ul>
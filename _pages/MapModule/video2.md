---
layout: module
permalink: /Maps/Video2
title: "CS174: LinkedMap with Friend Classes"
excerpt: "CS174: LinkedMap with Friend Classes"

info:
  prev: "./Exercise1"
  next: "./Exercise2"
---

Watch the video below, and click the next button once you have finished

<iframe width="560" height="315" src="https://www.youtube.com/embed/vJQ4PsiIwyg" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; web-share" allowfullscreen></iframe>

<h2>Notes</h2>
<ul>
<li>A <code>LinkedMap</code> is an implementation of the <code>Map</code> ADT using a linked list data structure.  It's just like a regular linked list, except we now have a <code>key</code> and a <code>value</code> that we wrap around instead of just one object</li>
<li>We define two different templates (placeholders) for both a <code>Node</code> and a <code>LinkedMap</code>: one type for the key and one for the value.</li>
<li>We can make <code>LinkedMap</code> be a <a href = "https://www.geeksforgeeks.org/friend-class-function-cpp/">friend class</a> of <code>Node</code> so that we can access <code>Node</code>'s private variables from within the <code>LinkedMap</code> class.  This is the most correct way to do data hiding and aggregation with a linked list class.</li>
</ul>

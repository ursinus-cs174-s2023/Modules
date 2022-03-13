---
layout: module
permalink: /LinkedList/Video1
title: "CS174: STL List Class"
excerpt: "CS174: STL List Class"

info:
  prev: "./Video0"
  next: "./Exercise1"
---

Watch the video below on STL linked lists

<iframe width="560" height="315" src="https://www.youtube.com/embed/1f9nZC0MMLI" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>

<h2>Notes</h2>

<ul>
<li>Removing elements from an array is a pain because we have to allocate a new array and copy everything over except for the element we're trying to remove.  We also have to be super careful with memory, and there are a lot of pitfalls!</li>
<li>There's something called a linked list in the STL library that is much better if we want to add/remove stuff.  The downside is that can't jump to any random location in it, and we always have to start at the beginning, but there are plenty of applications (like the invasive species assignment) where this tradeoff is totally worth it</li>
</ul>

<h2>Code</h2>

<a href = "https://github.com/ursinus-cs174-s2022/Modules/blob/gh-pages/_pages/LinkedList/driver1.cpp">Click here</a> to see the code from the video
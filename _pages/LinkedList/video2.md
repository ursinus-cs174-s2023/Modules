---
layout: module
permalink: /LinkedList/Video2
title: "CS174: Making Your Own Linked List"
excerpt: "CS174: Making Your Own Linked List"

info:
  prev: "./Video0"
  next: "./Exercise2"
---

Watch the video below on linked lists.  The code will be provided as starter code on the next page

<iframe width="560" height="315" src="https://www.youtube.com/embed/plKGFpW2Cys" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>

<h2>Notes</h2>

<ul>
<li>A linked list class consists of a helper class (sometimes implemented as a "friend class" in C++) called a "Node" that wraps around an object, and which also stores and object pointer which can be interpreted as an arrow that "links" us to the next node in the list.  We aggregate the Node class in the LinkedList class by storing a single variable: the head of the list, which is the beginning of the list</li>
<li>We need to be careful to clean up all of the dynamically allocated container nodes in the destructor</li>
</ul>

---
layout: module
permalink: /Maps/Video1
title: "CS174: Map ADT And STL Maps"
excerpt: "CS174: Map ADT And STL Maps"

info:
  next: "./Exercise1"
---

Please watch the video below, and click the next button once you have finished

<iframe width="560" height="315" src="https://www.youtube.com/embed/CAplnZ8wY1I" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; web-share" allowfullscreen></iframe>

<h2>Notes</h2>
<ul>
<li>A <code>Map</code> abstract data type is an unordered pairing between "keys" and "values."  We look things up by their key, and we get back the associated value</li>
<li>We can think of a map in the following ways:<ul><li>A collection of <b>pairs</b> of information, where a value is "glued" or "associated" to a key (in fact, the Perl programming language calls it an "associative array").</li><li>A <b>dictionary</b>, where you look up some information about a key (in fact, python calls it a "dictionary")</li><li>A <b>function</b>, where the input is the key and the output is the value.  This also highlights the fact that <b>each key can appear at most once</b> (i.e. it passes the "vertical line test").</li><li>An <b>array</b> with indices that are arbitrary object types.  C++, python, and Javascript all use the "syntactic sugar" of using the square brackets <code>[key]</code> to look up a value</li>
</ul>

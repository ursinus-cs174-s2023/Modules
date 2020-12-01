---
layout: module
permalink: /Module13/Video2
title: "CS174: Module 13: Recursion: Efficiency / Dynamic Programming"
excerpt: "CS174: Module 13: Recursion: Efficiency / Dynamic Programming"

info:
  prev: "./Exercise1"
  next: "./Exercise2"
---

Please watch the video below, and click the next button once you have finished

<iframe width="560" height="315" src="https://www.youtube.com/embed/2T4GBl_hAQc" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>

<h2>Notes</h2>


<ul>
<li>Global variables in C++ are variables declared outside of any particular method, and they are accessible from anywhere in the code.</li>
<li>Even though the naive recursive implementation of factorial is more elegant than the iterative version, its efficiency scales poorly as the input gets larger, though the fibonacci does not.  This is because the factorial branches in recursion, while the fibonacci goes in a straight line.</li>
<li>It is possible to accelerate the speed of recursive algorithms by storing previously computed results in memory.  This is called dynamic programming / memoization.</li>
</ul>

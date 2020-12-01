---
layout: module
permalink: /Module13/Video1
title: "CS174: Module 13: Computing sequences with recursion"
excerpt: "CS174: Module 13: Computing sequences with recursion"

info:
  next: "./Exercise1"
---

Please watch the video below, and click the next button once you have finished

<iframe width="560" height="315" src="https://www.youtube.com/embed/2T4GBl_hAQc" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>

<h2>Notes</h2>


<ul>
<li>The Ackermann function can be defined as 
\[A(m, n) = \left\{  \begin{array}{cc} n+1 & m = 0 \\ A(m-1, 1) & n = 0 \\ A(m-1, A(m, n-1)) & \text{otherwise} \end{array}  \right\}\]
</li>
<li>The Ackermann function grows extremely quickly when m >= 4!  This means that its inverse grows very, very slowly.  Surprisingly, the inverse Ackermann function can be used to describe the theoretical growth in computation time for some simple algorithms.  We will discuss this more in CS 371.</li>
<li>The factorial is defined as N! = N*(N-1)*(N-2)*..*1, which can be defined recursively as
\[ f(N) = \left\{ \begin{array}{cc} 1 & N = 1 \\ N*f(N-1) & N > 1 \end{array} \right\} \]
</li>
<li>The Fibonacci sequence starts off as 1, 1, 2, 3, 5, 8, 13, 21, 34...; in other words, every number is the sum of the two numbers before it.</li>
</ul>

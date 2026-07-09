<h2><a href="https://codeforces.com/contest/1501/problem/A" target="_blank" rel="noopener noreferrer">1501A — Alexey and Train</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1501A](https://codeforces.com/contest/1501/problem/A) |

## Topics
`implementation`

---

## Problem Statement

<div class="header"><div class="title">A. Alexey and Train</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Alexey is travelling on a train. Unfortunately, due to the bad weather, the train moves slower that it should!</p><p>Alexey took the train at the railroad terminal. Let's say that the train starts from the terminal at the moment $$$0$$$. Also, let's say that the train will visit $$$n$$$ stations numbered from $$$1$$$ to $$$n$$$ along its way, and that Alexey destination is the station $$$n$$$.</p><p>Alexey learned from the train schedule $$$n$$$ integer pairs $$$(a_i, b_i)$$$ where $$$a_i$$$ is the expected time of train's arrival at the $$$i$$$-th station and $$$b_i$$$ is the expected time of departure.</p><p>Also, using all information he has, Alexey was able to calculate $$$n$$$ integers $$$tm_1, tm_2, \dots, tm_n$$$ where $$$tm_i$$$ is the extra time the train need to travel from the station $$$i - 1$$$ to the station $$$i$$$. Formally, the train needs exactly $$$a_i - b_{i-1} + tm_i$$$ time to travel from station $$$i - 1$$$ to station $$$i$$$ (if $$$i = 1$$$ then $$$b_0$$$ is the moment the train leave the terminal, and it's equal to $$$0$$$).</p><p>The train leaves the station $$$i$$$, if both conditions are met: </p><ol> <li> it's on the station for at least $$$\left\lceil \frac{b_i - a_i}{2} \right\rceil$$$ units of time (division with ceiling); </li><li> current time $$$\ge b_i$$$. </li></ol><p>Since Alexey spent all his energy on prediction of time delays, help him to calculate the time of <span class="tex-font-style-bf">arrival</span> at the station $$$n$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains one integer $$$t$$$ ($$$1 \le t \le 100$$$) — the number of test cases.</p><p>The first line of each test case contains the single integer $$$n$$$ ($$$1 \le n \le 100$$$) — the number of stations.</p><p>Next $$$n$$$ lines contain two integers each: $$$a_i$$$ and $$$b_i$$$ ($$$1 \le a_i  \lt  b_i \le 10^6$$$). It's guaranteed that $$$b_i  \lt  a_{i+1}$$$. </p><p>Next line contains $$$n$$$ integers $$$tm_1, tm_2, \dots, tm_n$$$ ($$$0 \le tm_i \le 10^6$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print one integer — the time of Alexey's arrival at the last station.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id005567625098160016" id="id006729694687099672" class="input-output-copier">Copy</div></div><pre id="id005567625098160016">2
2
2 4
10 12
0 2
5
1 4
7 8
9 10
13 15
19 20
1 2 3 4 5
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0027683987043398717" id="id004973025455978578" class="input-output-copier">Copy</div></div><pre id="id0027683987043398717">12
32
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, Alexey arrives at station $$$1$$$ without any delay at the moment $$$a_1 = 2$$$ (since $$$tm_1 = 0$$$). After that, he departs at moment $$$b_1 = 4$$$. Finally, he arrives at station $$$2$$$ with $$$tm_2 = 2$$$ extra time, or at the moment $$$12$$$.</p><p>In the second test case, Alexey arrives at the first station with $$$tm_1 = 1$$$ extra time, or at moment $$$2$$$. The train, from one side, should stay at the station at least $$$\left\lceil \frac{b_1 - a_1}{2} \right\rceil = 2$$$ units of time and from the other side should depart not earlier than at moment $$$b_1 = 4$$$. As a result, the trains departs right at the moment $$$4$$$.</p><p>Using the same logic, we can figure out that the train arrives at the second station at the moment $$$9$$$ and departs at the moment $$$10$$$; at the third station: arrives at $$$14$$$ and departs at $$$15$$$; at the fourth: arrives at $$$22$$$ and departs at $$$23$$$. And, finally, arrives at the fifth station at $$$32$$$.</p></div>
<h2><a href="https://codeforces.com/contest/1503/problem/A" target="_blank" rel="noopener noreferrer">1503A — Balance the Bits</a></h2>

| | |
|---|---|
| **Difficulty** | 1600 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1503A](https://codeforces.com/contest/1503/problem/A) |

## Topics
`constructive algorithms` `greedy`

---

## Problem Statement

<div class="header"><div class="title">A. Balance the Bits</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>A sequence of brackets is called balanced if one can turn it into a valid math expression by adding characters '<span class="tex-font-style-tt">+</span>' and '<span class="tex-font-style-tt">1</span>'. For example, sequences '<span class="tex-font-style-tt">(())()</span>', '<span class="tex-font-style-tt">()</span>', and '<span class="tex-font-style-tt">(()(()))</span>' are balanced, while '<span class="tex-font-style-tt">)(</span>', '<span class="tex-font-style-tt">(()</span>', and '<span class="tex-font-style-tt">(()))(</span>' are not.</p><p>You are given a binary string $$$s$$$ of length $$$n$$$. Construct two balanced bracket sequences $$$a$$$ and $$$b$$$ of length $$$n$$$ such that for all $$$1\le i\le n$$$: </p><ul> <li> if $$$s_i=1$$$, then $$$a_i=b_i$$$ </li><li> if $$$s_i=0$$$, then $$$a_i\ne b_i$$$ </li></ul><p>If it is impossible, you should report about it.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1\le t\le 10^4$$$) — the number of test cases.</p><p>The first line of each test case contains a single integer $$$n$$$ ($$$2\le n\le 2\cdot 10^5$$$, $$$n$$$ is even).</p><p>The next line contains a string $$$s$$$ of length $$$n$$$, consisting of characters <span class="tex-font-style-tt">0</span> and <span class="tex-font-style-tt">1</span>.</p><p>The sum of $$$n$$$ across all test cases does not exceed $$$2\cdot 10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>If such two balanced bracked sequences exist, output "<span class="tex-font-style-tt">YES</span>" on the first line, otherwise output "<span class="tex-font-style-tt">NO</span>". You can print each letter in any case (upper or lower).</p><p>If the answer is "<span class="tex-font-style-tt">YES</span>", output the balanced bracket sequences $$$a$$$ and $$$b$$$ satisfying the conditions on the next two lines.</p><p>If there are multiple solutions, you may print any.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id006641086526048674" id="id006871020302676749" class="input-output-copier">Copy</div></div><pre id="id006641086526048674">3
6
101101
10
1001101101
4
1100
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008426492579291301" id="id0011539049904915177" class="input-output-copier">Copy</div></div><pre id="id008426492579291301">YES
()()()
((()))
YES
()()((()))
(())()()()
NO
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, $$$a=$$$"<span class="tex-font-style-tt">()()()</span>" and $$$b=$$$"<span class="tex-font-style-tt">((()))</span>". The characters are equal in positions $$$1$$$, $$$3$$$, $$$4$$$, and $$$6$$$, which are the exact same positions where $$$s_i=1$$$.</p><p>In the second test case, $$$a=$$$"<span class="tex-font-style-tt">()()((()))</span>" and $$$b=$$$"<span class="tex-font-style-tt">(())()()()</span>". The characters are equal in positions $$$1$$$, $$$4$$$, $$$5$$$, $$$7$$$, $$$8$$$, $$$10$$$, which are the exact same positions where $$$s_i=1$$$.</p><p>In the third test case, there is no solution.</p></div>
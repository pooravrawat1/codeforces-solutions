Andrei has a huge pile of n
 apples. He can divide the pile into two smaller piles: if there are x
 apples in the pile, he will get piles with ⌊x2⌋
∗
 and ⌈x2⌉
†
 apples. This division takes Andrei 1
 minute.

Andrei wants to eat k
 apples, but he doesn't want to count them at all. That is why he wants to obtain a pile that contains exactly k
 apples. Determine whether it is possible to achieve this by performing pile divisions. If it is possible, find the minimum possible time for Andrei to obtain a pile with exactly k
 apples.

∗
⌊x2⌋
 — the largest integer ≤x2
.

†
⌈x2⌉
 — the smallest integer ≥x2
.

Input
Each test consists of several test cases. The first line contains a single integer t
 (1≤t≤104)
 — the number of test cases. The following lines describe the test cases.

In the only line of each test case, two integers n
 and k
 are given — the number of apples in the huge pile and the number of apples that Andrei wants to obtain in one pile (1≤n,k≤109)
.

Output
For each test case, output −1
 if it is impossible to obtain a pile with exactly k
 apples. Otherwise, output the minimum possible time required to obtain such a pile.

Example
InputCopy
4
10 3
11 5
21 4
1000000000 1
OutputCopy
2
1
-1
29
Note
In the first test case, after the first division, two piles of 5
 apples will be created. If one of them is divided, it will result in piles with 2
 and 3
 apples, so the answer is 2
.

In the second test case, if the pile is divided into two, it will result in piles with 5
 and 6
 apples, so the answer is 1
.

In the third test case, it is only possible to obtain piles with 1
, 2
, 3
, 5
, 6
, 10
, 11
, or 21
 apples, so the answer is −1
.



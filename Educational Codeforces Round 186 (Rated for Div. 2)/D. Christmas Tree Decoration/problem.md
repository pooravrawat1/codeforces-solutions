A group of n
 people decided to decorate the Christmas tree. They have (n+1)
 boxes of decorations, numbered from 0
 to n
. Initially, the i
-th box contains ai
 decorations.

We say that a permutation p
 of size n
 (an array of size n
 where each number from 1
 to n
 appears exactly once) is fair if it is possible to hang all the decorations on the tree using the following process:

person p1
 takes a decoration either from box 0
 or from box p1
, and hangs it on the tree;
person p2
 takes a decoration either from box 0
 or from box p2
, and hangs it on the tree;
and so on;
after person pn
, person p1
 follows, and the process repeats until all the decoration are on the tree.
During this process, there should never be a situation where person i
 needs to hang a decoration, but both box 0
 and box i
 are empty. If such a situation cannot be avoided, the permutation is not fair. However, if the people can choose from which box to take a decoration during each step in such a way that this situation does not arise, then the permutation is fair.

Your task is to calculate the number of fair permutations. Since the answer may be large, output it modulo 998244353
.

Input
The first line contains a single integer t
 (1≤t≤5000
) — the number of test cases.

The first line of each test case contains a single integer n
 (1≤n≤50
).

The second line contains (n+1)
 integers a0,a1,…,an
 (0≤ai≤106
).

Output
For each test case, print a single integer — the number of fair permutations, taken modulo 998244353
.
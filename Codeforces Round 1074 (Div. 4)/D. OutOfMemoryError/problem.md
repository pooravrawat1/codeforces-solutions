Bessie has an array of n integers a1,a2,…,an. Bessie performs m operations on the array. The i-th operation sets abi=abi+ci
.

Unfortunately, due to rising RAM costs, Bessie's computer has limited memory, and whenever any element of the array is greater than h
, her computer crashes, and every element in the array is reset to its original value.

After all operations have been performed, output the array a
.

Input
The first line of the input contains a single integer t
 (1≤t≤104
) — the number of test cases.

The first line of each test case contains three integers n,m,h
 (1≤n,m≤2⋅105
, 1≤h≤109
) — the length of array a
, the number of operations performed, and the maximum value that Bessie's computer can store without crashing.

The second line contains n
 integers a1,a2,…,an
 (0≤ai≤h
) — the array a
.

The next m
 lines contain two integers bi,ci
 (1≤bi≤n
, 0≤ci≤109
) — the operations that Bessie performs on the array.

It is guaranteed that the sum of n
 and the sum of m
 over all test cases does not exceed 2⋅105
.

Output
For each test case, output the array a
 after all operations have been performed.

Example
InputCopy
3
3 4 5
1 2 1
1 4
2 4
3 3
2 0
5 3 1
1 1 1 1 1
1 1
1 1
2 1
4 4 1
1 0 0 0
1 1
4 4
3 3
4 4
OutputCopy
1 2 4 
1 1 1 1 1 
1 0 0 0 
Note
For the first test case, the array a
 is changed as follows:

Before all operations, a=[1,2,1]
.
After the first operation, a=[5,2,1]
.
After the second operation, a=[5,6,1]
, but since 6>h
, the computer crashes, and a=[1,2,1]
.
After the third operation, a=[1,2,4]
.
After the fourth operation, a=[1,2,4]
.
For the third test case, each operation causes the computer to crash, so a=[1,0,0,0]
.
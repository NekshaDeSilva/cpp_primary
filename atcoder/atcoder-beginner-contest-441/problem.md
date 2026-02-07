A - Black Square  / 
Time Limit: 2 sec / Memory Limit: 1024 MiB

Score : 
100 points

Problem Statement
There is a grid with 
10 
100
  rows and  loud
10 
100
  columns.
In what follows, the cell at the 
i-th row from the top and 
j-th column from the left is denoted as cell 
(i,j).

In this grid, only the 
100×100 region with cell 
(P,Q) as the top-left cell is painted black, and all other cells are painted white.
Determine whether cell 
(X,Y) is painted black.

Constraints
1≤P,Q,X,Y≤10000
P,Q,X,Y are integers.
Input
The input is given from Standard Input in the following format:

P 
Q
X 
Y
Output
If cell 
(X,Y) is painted black, print Yes; otherwise, print No.

Sample Input 1
Copy
3 3
5 10
Sample Output 1
Copy
Yes
The 
100×100 region with cell 
(3,3) as the top-left cell is painted black.
Cell 
(5,10) is included in this region, so print Yes.

Sample Input 2
Copy
5 5
10 1000
Sample Output 2
Copy
No
The 
100×100 region with cell 
(5,5) as the top-left cell is painted black.
Cell 
(10,1000) is not included in this region, so print No.

Sample Input 3
Copy
1 2
1 1
Sample Output 3
Copy
No
The 
100×100 region with cell 
(1,2) as the top-left cell is painted black.
Cell 
(1,1) is not included in this region, so print No.


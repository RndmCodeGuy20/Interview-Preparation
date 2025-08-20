# Count Square Submatrices with All Ones

<div style="display: flex; justify-content: space-between; align-items: center">
<div style="color: #fac31d;
padding: 2px; background-color: #3a3f4b; border-radius: 5px;">Medium</div>
<div style="color: #46c6c2">Array</div>
<div style="color: #46c6c2">Dynamic Programming</div>
<div style="color: #46c6c2">Matrix</div>
</div>

---

Given a `m * n` matrix of ones and zeros, return how many **square** submatrices have all ones.

**Example 1:**

**Input:** matrix =
\[
  \[0,1,1,1\],
  \[1,1,1,1\],
  \[0,1,1,1\]
\]
**Output:** 15
**Explanation:** 
There are **10** squares of side 1.
There are **4** squares of side 2.
There is  **1** square of side 3.
Total number of squares = 10 + 4 + 1 = **15**.

**Example 2:**

**Input:** matrix = 
\[
  \[1,0,1\],
  \[1,1,0\],
  \[1,1,0\]
\]
**Output:** 7
**Explanation:** 
There are **6** squares of side 1.  
There is **1** square of side 2. 
Total number of squares = 6 + 1 = **7**.

**Constraints:**

*   `1 <= arr.length <= 300`
*   `1 <= arr[0].length <= 300`
*   `0 <= arr[i][j] <= 1`
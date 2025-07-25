# Find Lucky Integer in an Array

<div style="display: flex; justify-content: space-between; align-items: center">
<div style="color: #46c6c2;
padding: 2px; background-color: #3a3f4b; border-radius: 5px;">Easy</div>
<div style="color: #46c6c2">Array</div>
<div style="color: #46c6c2">Hash Table</div>
<div style="color: #46c6c2">Counting</div>
</div>

---

Given an array of integers `arr`, a **lucky integer** is an integer that has a frequency in the array equal to its value.

Return _the largest **lucky integer** in the array_. If there is no **lucky integer** return `-1`.

**Example 1:**

**Input:** arr = \[2,2,3,4\]
**Output:** 2
**Explanation:** The only lucky number in the array is 2 because frequency\[2\] == 2.

**Example 2:**

**Input:** arr = \[1,2,2,3,3,3\]
**Output:** 3
**Explanation:** 1, 2 and 3 are all lucky numbers, return the largest of them.

**Example 3:**

**Input:** arr = \[2,2,2,3,3\]
**Output:** -1
**Explanation:** There are no lucky numbers in the array.

**Constraints:**

*   `1 <= arr.length <= 500`
*   `1 <= arr[i] <= 500`
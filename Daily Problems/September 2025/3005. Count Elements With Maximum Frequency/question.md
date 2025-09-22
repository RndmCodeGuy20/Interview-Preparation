# Count Elements With Maximum Frequency

<div style="display: flex; justify-content: space-between; align-items: center">
<div style="color: #46c6c2;
padding: 2px; background-color: #3a3f4b; border-radius: 5px;">Easy</div>
<div style="color: #46c6c2">Array</div>
<div style="color: #46c6c2">Hash Table</div>
<div style="color: #46c6c2">Counting</div>
</div>

---

You are given an array `nums` consisting of **positive** integers.

Return _the **total frequencies** of elements in_ `nums` _such that those elements all have the **maximum** frequency_.

The **frequency** of an element is the number of occurrences of that element in the array.

**Example 1:**

**Input:** nums = \[1,2,2,3,1,4\]
**Output:** 4
**Explanation:** The elements 1 and 2 have a frequency of 2 which is the maximum frequency in the array.
So the number of elements in the array with maximum frequency is 4.

**Example 2:**

**Input:** nums = \[1,2,3,4,5\]
**Output:** 5
**Explanation:** All elements of the array have a frequency of 1 which is the maximum.
So the number of elements in the array with maximum frequency is 5.

**Constraints:**

*   `1 <= nums.length <= 100`
*   `1 <= nums[i] <= 100`
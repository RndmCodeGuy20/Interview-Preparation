# Find Unique Binary String

<div style="display: flex; justify-content: space-between; align-items: center">
<div style="color: #fac31d;
padding: 2px; background-color: #3a3f4b; border-radius: 5px;">Medium</div>
<div style="color: #46c6c2">Array</div>
<div style="color: #46c6c2">Hash Table</div>
<div style="color: #46c6c2">String</div>
<div style="color: #46c6c2">Backtracking</div>
</div>

---

Given an array of strings `nums` containing `n` **unique** binary strings each of length `n`, return _a binary string of length_ `n` _that **does not appear** in_ `nums`_. If there are multiple answers, you may return **any** of them_.

**Example 1:**

**Input:** nums = \["01","10"\]
**Output:** "11"
**Explanation:** "11" does not appear in nums. "00" would also be correct.

**Example 2:**

**Input:** nums = \["00","01"\]
**Output:** "11"
**Explanation:** "11" does not appear in nums. "10" would also be correct.

**Example 3:**

**Input:** nums = \["111","011","001"\]
**Output:** "101"
**Explanation:** "101" does not appear in nums. "000", "010", "100", and "110" would also be correct.

**Constraints:**

*   `n == nums.length`
*   `1 <= n <= 16`
*   `nums[i].length == n`
*   `nums[i]` is either `'0'` or `'1'`.
*   All the strings of `nums` are **unique**.
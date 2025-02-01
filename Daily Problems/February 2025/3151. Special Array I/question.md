# Special Array I

<div style="display: flex; justify-content: space-between; align-items: center">
<div style="color: #46c6c2;
padding: 2px; background-color: #3a3f4b; border-radius: 5px;">Easy</div>
<div style="color: #46c6c2">Array</div>
</div>

---

An array is considered **special** if every pair of its adjacent elements contains two numbers with different parity.

You are given an array of integers `nums`. Return `true` if `nums` is a **special** array, otherwise, return `false`.

**Example 1:**

**Input:** nums = \[1\]

**Output:** true

**Explanation:**

There is only one element. So the answer is `true`.

**Example 2:**

**Input:** nums = \[2,1,4\]

**Output:** true

**Explanation:**

There is only two pairs: `(2,1)` and `(1,4)`, and both of them contain numbers with different parity. So the answer is `true`.

**Example 3:**

**Input:** nums = \[4,3,1,6\]

**Output:** false

**Explanation:**

`nums[1]` and `nums[2]` are both odd. So the answer is `false`.

**Constraints:**

*   `1 <= nums.length <= 100`
*   `1 <= nums[i] <= 100`
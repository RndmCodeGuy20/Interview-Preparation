# Largest Divisible Subset

<div style="display: flex; justify-content: space-between; align-items: center">
<div style="color: #fac31d;
padding: 2px; background-color: #3a3f4b; border-radius: 5px;">Medium</div>
<div style="color: #46c6c2">Array</div>
<div style="color: #46c6c2">Math</div>
<div style="color: #46c6c2">Dynamic Programming</div>
<div style="color: #46c6c2">Sorting</div>
</div>

---

Given a set of **distinct** positive integers `nums`, return the largest subset `answer` such that every pair `(answer[i], answer[j])` of elements in this subset satisfies:

*   `answer[i] % answer[j] == 0`, or
*   `answer[j] % answer[i] == 0`

If there are multiple solutions, return any of them.

**Example 1:**

**Input:** nums = \[1,2,3\]
**Output:** \[1,2\]
**Explanation:** \[1,3\] is also accepted.

**Example 2:**

**Input:** nums = \[1,2,4,8\]
**Output:** \[1,2,4,8\]

**Constraints:**

*   `1 <= nums.length <= 1000`
*   `1 <= nums[i] <= 2 * 109`
*   All the integers in `nums` are **unique**.
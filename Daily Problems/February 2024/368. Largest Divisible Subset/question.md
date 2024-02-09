
<style>
*{
    font-family: "Plus Jakarta Sans", sans-serif;
    padding: 0;
    margin: 0;
    box-sizing: border-box;
}
.diff{
    background: #3a3f4b;
    padding: 5px;
    width: max-content;
    border-radius: 5px;
    font-size: 12px;
    font-family: "Plus Jakarta Sans", sans-serif;
    font-weight: 700;
}
</style>

# Largest Divisible Subset

<div style="display: flex; justify-content: space-between; align-items: center">
<div class="diff" style="color: #fac31d;padding: 2px; background-color: '#3a3f4b'; border-radius: 5px;">Medium</div>
<br>
<div class="diff" style="color: #46c6c2">Array</div>
<div class="diff" style="color: #46c6c2">Math</div>
<div class="diff" style="color: #46c6c2">Dynamic Programming</div>
<div class="diff" style="color: #46c6c2">Sorting</div>
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

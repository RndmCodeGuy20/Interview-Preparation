
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

# Bitwise AND of Numbers Range

<div style="display: flex; justify-content: space-between; align-items: center">
<div class="diff" style="color: #fac31d;padding: 2px; background-color: '#3a3f4b'; border-radius: 5px;">Medium</div>
<br>
<div class="diff" style="color: #46c6c2">Bit Manipulation</div>
</div>

---

Given two integers `left` and `right` that represent the range `[left, right]`, return _the bitwise AND of all numbers in this range, inclusive_.

**Example 1:**

**Input:** left = 5, right = 7
**Output:** 4

**Example 2:**

**Input:** left = 0, right = 0
**Output:** 0

**Example 3:**

**Input:** left = 1, right = 2147483647
**Output:** 0

**Constraints:**

*   `0 <= left <= right <= 231 - 1`

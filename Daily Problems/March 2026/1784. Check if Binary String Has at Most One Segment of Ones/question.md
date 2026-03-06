# Check if Binary String Has at Most One Segment of Ones

<div style="display: flex; justify-content: space-between; align-items: center">
<div style="color: #46c6c2;
padding: 2px; background-color: #3a3f4b; border-radius: 5px;">Easy</div>
<div style="color: #46c6c2">String</div>
</div>

---

Given a binary string `s` **​​​​​without leading zeros**, return `true`​​​ _if_ `s` _contains **at most one contiguous segment of ones**_. Otherwise, return `false`.

**Example 1:**

**Input:** s = "1001"
**Output:** false
**Explanation:** The ones do not form a contiguous segment.

**Example 2:**

**Input:** s = "110"
**Output:** true

**Constraints:**

*   `1 <= s.length <= 100`
*   `s[i]`​​​​ is either `'0'` or `'1'`.
*   `s[0]` is `'1'`.
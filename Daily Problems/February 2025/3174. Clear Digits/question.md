# Clear Digits

<div style="display: flex; justify-content: space-between; align-items: center">
<div style="color: #46c6c2;
padding: 2px; background-color: #3a3f4b; border-radius: 5px;">Easy</div>
<div style="color: #46c6c2">String</div>
<div style="color: #46c6c2">Stack</div>
<div style="color: #46c6c2">Simulation</div>
</div>

---

You are given a string `s`.

Your task is to remove **all** digits by doing this operation repeatedly:

*   Delete the _first_ digit and the **closest** **non-digit** character to its _left_.

Return the resulting string after removing all digits.

**Example 1:**

**Input:** s = "abc"

**Output:** "abc"

**Explanation:**

There is no digit in the string.

**Example 2:**

**Input:** s = "cb34"

**Output:** ""

**Explanation:**

First, we apply the operation on `s[2]`, and `s` becomes `"c4"`.

Then we apply the operation on `s[1]`, and `s` becomes `""`.

**Constraints:**

*   `1 <= s.length <= 100`
*   `s` consists only of lowercase English letters and digits.
*   The input is generated such that it is possible to delete all digits.
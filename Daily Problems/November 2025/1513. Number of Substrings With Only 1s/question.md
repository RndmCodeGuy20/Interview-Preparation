# Number of Substrings With Only 1s

<div style="display: flex; justify-content: space-between; align-items: center">
<div style="color: #fac31d;
padding: 2px; background-color: #3a3f4b; border-radius: 5px;">Medium</div>
<div style="color: #46c6c2">Math</div>
<div style="color: #46c6c2">String</div>
</div>

---

Given a binary string `s`, return _the number of substrings with all characters_ `1`_'s_. Since the answer may be too large, return it modulo `109 + 7`.

**Example 1:**

**Input:** s = "0110111"
**Output:** 9
**Explanation:** There are 9 substring in total with only 1's characters.
"1" -> 5 times.
"11" -> 3 times.
"111" -> 1 time.

**Example 2:**

**Input:** s = "101"
**Output:** 2
**Explanation:** Substring "1" is shown 2 times in s.

**Example 3:**

**Input:** s = "111111"
**Output:** 21
**Explanation:** Each substring contains only 1's characters.

**Constraints:**

*   `1 <= s.length <= 105`
*   `s[i]` is either `'0'` or `'1'`.
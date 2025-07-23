# Maximum Score From Removing Substrings

<div style="display: flex; justify-content: space-between; align-items: center">
<div style="color: #fac31d;
padding: 2px; background-color: #3a3f4b; border-radius: 5px;">Medium</div>
<div style="color: #46c6c2">String</div>
<div style="color: #46c6c2">Stack</div>
<div style="color: #46c6c2">Greedy</div>
</div>

---

You are given a string `s` and two integers `x` and `y`. You can perform two types of operations any number of times.

*   Remove substring `"ab"` and gain `x` points.
    *   For example, when removing `"ab"` from `"cabxbae"` it becomes `"cxbae"`.
*   Remove substring `"ba"` and gain `y` points.
    *   For example, when removing `"ba"` from `"cabxbae"` it becomes `"cabxe"`.

Return _the maximum points you can gain after applying the above operations on_ `s`.

**Example 1:**

**Input:** s = "cdbcbbaaabab", x = 4, y = 5
**Output:** 19
**Explanation:**
- Remove the "ba" underlined in "cdbcbbaaabab". Now, s = "cdbcbbaaab" and 5 points are added to the score.
- Remove the "ab" underlined in "cdbcbbaaab". Now, s = "cdbcbbaa" and 4 points are added to the score.
- Remove the "ba" underlined in "cdbcbbaa". Now, s = "cdbcba" and 5 points are added to the score.
- Remove the "ba" underlined in "cdbcba". Now, s = "cdbc" and 5 points are added to the score.
Total score = 5 + 4 + 5 + 5 = 19.

**Example 2:**

**Input:** s = "aabbaaxybbaabb", x = 5, y = 4
**Output:** 20

**Constraints:**

*   `1 <= s.length <= 105`
*   `1 <= x, y <= 104`
*   `s` consists of lowercase English letters.
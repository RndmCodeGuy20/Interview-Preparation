# Find the Original Typed String II

<div style="display: flex; justify-content: space-between; align-items: center">
<div style="color: #ff375f;
padding: 2px; background-color: #3a3f4b; border-radius: 5px;">Hard</div>
<div style="color: #46c6c2">String</div>
<div style="color: #46c6c2">Dynamic Programming</div>
<div style="color: #46c6c2">Prefix Sum</div>
</div>

---

Alice is attempting to type a specific string on her computer. However, she tends to be clumsy and **may** press a key for too long, resulting in a character being typed **multiple** times.

You are given a string `word`, which represents the **final** output displayed on Alice's screen. You are also given a **positive** integer `k`.

Return the total number of _possible_ original strings that Alice _might_ have intended to type, if she was trying to type a string of size **at least** `k`.

Since the answer may be very large, return it **modulo** `109 + 7`.

**Example 1:**

**Input:** word = "aabbccdd", k = 7

**Output:** 5

**Explanation:**

The possible strings are: `"aabbccdd"`, `"aabbccd"`, `"aabbcdd"`, `"aabccdd"`, and `"abbccdd"`.

**Example 2:**

**Input:** word = "aabbccdd", k = 8

**Output:** 1

**Explanation:**

The only possible string is `"aabbccdd"`.

**Example 3:**

**Input:** word = "aaabbb", k = 3

**Output:** 8

**Constraints:**

*   `1 <= word.length <= 5 * 105`
*   `word` consists only of lowercase English letters.
*   `1 <= k <= 2000`